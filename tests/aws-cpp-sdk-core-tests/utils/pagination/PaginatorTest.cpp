/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/core/utils/StringUtils.h>
#include <vector>
#include <string>

using namespace Aws::Utils::Pagination;
using namespace Aws::Utils;

struct TestResult {
    Aws::Vector<Aws::String> items;
    Aws::String outputToken;
    bool moreResults;

    const Aws::Vector<Aws::String>& GetItems() const { return items; }
    const Aws::String& GetOutputToken() const { return outputToken; }
    bool GetMoreResults() const { return moreResults; }
};

struct TestOutcome {
    bool success;
    Aws::String error;
    TestResult result;

    bool IsSuccess() const { return success; }
    const Aws::String& GetError() const { return error; }
    const TestResult& GetResult() const { return result; }
};

struct TestRequest {
    Aws::String inputToken;
    int limitKey = 3;
    
    void SetInputToken(const Aws::String& t) { inputToken = t; }
    const Aws::String& GetInputToken() const { return inputToken; }
};

class PaginatorTestClient {
private:
    Aws::Vector<Aws::String> allData;
    bool shouldFail = false;
    int failOnPage = -1;
    int currentPage = 0;
    
public:
    PaginatorTestClient() : allData({"apple", "banana", "cherry", "dragon-fruit", "elderberry", "fig", "grape"}) {}
    
    void SetData(const Aws::Vector<Aws::String>& data) { allData = data; }
    void SetShouldFail(bool fail) { shouldFail = fail; }
    void SetFailOnPage(int page) { failOnPage = page; }
    void Reset() {
        allData = {"apple", "banana", "cherry", "dragon-fruit", "elderberry", "fig", "grape"};
        shouldFail = false;
        failOnPage = -1;
        currentPage = 0;
    }
    
    TestOutcome ListItems(const TestRequest& request) {
        if (shouldFail) {
            return {false, "Request failed", {}};
        }
        
        if (failOnPage >= 0 && currentPage == failOnPage) {
            currentPage++;
            return {false, "Page " + StringUtils::to_string(failOnPage) + " failed", {}};
        }
        currentPage++;
        
        int startIdx = 0;
        if (!request.GetInputToken().empty()) {
            startIdx = StringUtils::ConvertToInt32(request.GetInputToken().c_str());
        }
        
        TestResult result;
        for (size_t i = 0; i < static_cast<size_t>(request.limitKey) && startIdx + i < allData.size(); ++i) {
            result.items.push_back(allData[startIdx + i]);
        }
        
        int nextIdx = startIdx + request.limitKey;
        if (static_cast<size_t>(nextIdx) < allData.size()) {
            result.outputToken = StringUtils::to_string(nextIdx);
            result.moreResults = true;
        } else {
            result.moreResults = false;
        }
        
        return {true, "", result};
    }
};

struct ListItemsTraits {
    using OutcomeType = TestOutcome;
    using ResultType = TestResult;
    
    static OutcomeType Invoke(PaginatorTestClient* client, const TestRequest& request) {
        return client->ListItems(request);
    }
    
    static bool HasMoreResults(const TestResult& result) {
        return result.GetMoreResults();
    }
    
    static void SetNextRequest(const TestResult& result, TestRequest& request) {
        request.SetInputToken(result.GetOutputToken());
    }
};

class PaginatorTest : public Aws::Testing::AwsCppSdkGTestSuite
{
protected:
    void SetUp() override
    {
        client.Reset();
    }
    
    void TearDown() override
    {
        client.Reset();
    }
    
    PaginatorTestClient client;
    TestRequest request;
};

TEST_F(PaginatorTest, TestIteratesThroughAllPages)
{
    Paginator<PaginatorTestClient, TestRequest, ListItemsTraits> paginator(&client, request);
    
    Aws::Vector<Aws::String> allItems;
    int pageCount = 0;
    
    auto it = paginator.begin();
    auto end = paginator.end();
    while (it != end)
    {
        const auto& outcome = *it;
        ASSERT_TRUE(outcome.IsSuccess());
        pageCount++;
        
        const auto& page = outcome.GetResult();
        for (const auto& item : page.GetItems())
        {
            allItems.push_back(item);
        }
        ++it;
    }
    
    EXPECT_EQ(pageCount, 3); // 7 items / 3 per page = 3 pages
    EXPECT_EQ(allItems.size(), 7u);
    EXPECT_STREQ(allItems[0].c_str(), "apple");
    EXPECT_STREQ(allItems[6].c_str(), "grape");
}

TEST_F(PaginatorTest, TestHandlesErrorGracefully)
{
    client.SetShouldFail(true);
    Paginator<PaginatorTestClient, TestRequest, ListItemsTraits> paginator(&client, request);
    
    auto it = paginator.begin();
    ASSERT_TRUE(it != paginator.end());
    
    const auto& outcome = *it;
    EXPECT_FALSE(outcome.IsSuccess());
    EXPECT_STREQ(outcome.GetError().c_str(), "Request failed");

    ++it;
    EXPECT_TRUE(it == paginator.end());
}

TEST_F(PaginatorTest, TestEmptyResultSet)
{
    client.SetData({});
    Paginator<PaginatorTestClient, TestRequest, ListItemsTraits> paginator(&client, request);
    
    auto it = paginator.begin();
    ASSERT_TRUE(it != paginator.end());
    
    const auto& outcome = *it;
    EXPECT_TRUE(outcome.IsSuccess());
    EXPECT_TRUE(outcome.GetResult().GetItems().empty());
    EXPECT_FALSE(outcome.GetResult().GetMoreResults());

    ++it;
    EXPECT_TRUE(it == paginator.end());
}

TEST_F(PaginatorTest, TestBeginEndIteratorComparison)
{
    Paginator<PaginatorTestClient, TestRequest, ListItemsTraits> paginator(&client, request);
    
    auto begin = paginator.begin();
    auto end = paginator.end();
    
    EXPECT_FALSE(begin == end);

    while (begin != end)
    {
        ++begin;
    }
    
    EXPECT_TRUE(begin == end);
}

TEST_F(PaginatorTest, TestHandlesErrorOnSecondPage)
{
    client.SetFailOnPage(1); // Fail on second page (0-indexed)
    Paginator<PaginatorTestClient, TestRequest, ListItemsTraits> paginator(&client, request);
    
    auto it = paginator.begin();
    
    // First page should succeed
    ASSERT_TRUE(it != paginator.end());
    EXPECT_TRUE((*it).IsSuccess());
    EXPECT_EQ((*it).GetResult().GetItems().size(), 3u);
    
    // Move to second page
    ++it;
    
    // Second page should have the error
    ASSERT_TRUE(it != paginator.end());
    EXPECT_FALSE((*it).IsSuccess());
    EXPECT_TRUE((*it).GetError().find("Page 1 failed") != Aws::String::npos);
    
    // After error, iteration should end
    ++it;
    EXPECT_TRUE(it == paginator.end());
}