/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Utils;

TEST(DocumentTest, TestParseString)
{
    const Aws::String docString = R"("testString")";
    Document doc(docString);
    if (doc.WasParseSuccessful())
    {
        ASSERT_TRUE(doc.GetErrorMessage().empty());
        auto view = doc.View();
        ASSERT_TRUE(view.IsString());
        ASSERT_STREQ("testString", view.AsString().c_str());
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(doc.GetErrorMessage().c_str());
    }
}

TEST(DocumentTest, TestParseStringValue)
{
    const Aws::String docString = R"({"testStringKey":"testStringValue"})";
    Document doc(docString);
    if (doc.WasParseSuccessful())
    {
        ASSERT_TRUE(doc.GetErrorMessage().empty());
        auto view = doc.View();
        ASSERT_TRUE(view.IsObject());
        ASSERT_STREQ("testStringValue", view.GetString("testStringKey").c_str());
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(doc.GetErrorMessage().c_str());
    }
}

TEST(DocumentTest, TestParseBool)
{
    const Aws::String docString = R"(false)";
    Document doc(docString);
    if (doc.WasParseSuccessful())
    {
        ASSERT_TRUE(doc.GetErrorMessage().empty());
        auto view = doc.View();
        ASSERT_TRUE(view.IsBool());
        ASSERT_FALSE(view.AsBool());
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(doc.GetErrorMessage().c_str());
    }
}

TEST(DocumentTest, TestParseBoolValue)
{
    const Aws::String docString = R"({"testBoolKey":false})";
    Document doc(docString);
    if (doc.WasParseSuccessful())
    {
        ASSERT_TRUE(doc.GetErrorMessage().empty());
        auto view = doc.View();
        ASSERT_TRUE(view.IsObject());
        ASSERT_FALSE(view.GetBool("testBoolKey"));
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(doc.GetErrorMessage().c_str());
    }
}

TEST(DocumentTest, TestParseInteger)
{
    Aws::String docString = R"(10)";
    Document doc(docString);
    if (doc.WasParseSuccessful())
    {
        ASSERT_TRUE(doc.GetErrorMessage().empty());
        auto view = doc.View();
        ASSERT_TRUE(view.IsIntegerType());
        ASSERT_FALSE(view.IsFloatingPointType());
        ASSERT_EQ(10, view.AsInteger());
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(doc.GetErrorMessage().c_str());
    }

    docString = R"(2.99792458e8)";
    doc = Document(docString);
    if (doc.WasParseSuccessful())
    {
        ASSERT_TRUE(doc.GetErrorMessage().empty());
        auto view = doc.View();
        ASSERT_TRUE(view.IsIntegerType());
        ASSERT_FALSE(view.IsFloatingPointType());
        ASSERT_EQ(299792458, view.AsInteger());
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(doc.GetErrorMessage().c_str());
    }
}

TEST(DocumentTest, TestParseIntegerValue)
{
    const Aws::String docString = R"({"testIntKey":10})";
    Document doc(docString);
    if (doc.WasParseSuccessful())
    {
        ASSERT_TRUE(doc.GetErrorMessage().empty());
        auto view = doc.View();
        ASSERT_TRUE(view.IsObject());
        ASSERT_EQ(10, view.GetInteger("testIntKey"));
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(doc.GetErrorMessage().c_str());
    }
}

TEST(DocumentTest, TestParseInt64)
{
    const Aws::String docString = R"(8765432109876543210)";
    Document doc(docString);
    if (doc.WasParseSuccessful())
    {
        ASSERT_TRUE(doc.GetErrorMessage().empty());
        auto view = doc.View();
        ASSERT_TRUE(view.IsIntegerType());
        ASSERT_FALSE(view.IsFloatingPointType());
        ASSERT_EQ(8765432109876543210, view.AsInt64());
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(doc.GetErrorMessage().c_str());
    }
}

TEST(DocumentTest, TestParseInt64Value)
{
    const Aws::String docString = R"({"testInt64Key":8765432109876543210})";
    Document doc(docString);
    if (doc.WasParseSuccessful())
    {
        ASSERT_TRUE(doc.GetErrorMessage().empty());
        auto view = doc.View();
        ASSERT_TRUE(view.IsObject());
        ASSERT_EQ(8765432109876543210, view.GetInt64("testInt64Key"));
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(doc.GetErrorMessage().c_str());
    }
}

TEST(DocumentTest, TestParseDouble)
{
    const Aws::String docString = R"(6.626e-34)";
    Document doc(docString);
    if (doc.WasParseSuccessful())
    {
        ASSERT_TRUE(doc.GetErrorMessage().empty());
        auto view = doc.View();
        ASSERT_TRUE(view.IsFloatingPointType());
        ASSERT_FALSE(view.IsIntegerType());
        ASSERT_EQ(6.626e-34, view.AsDouble());
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(doc.GetErrorMessage().c_str());
    }
}

TEST(DocumentTest, TestParseDoubleValue)
{
    const Aws::String docString = R"({"testDoubleKey":-6.626e-34})";
    Document doc(docString);
    if (doc.WasParseSuccessful())
    {
        ASSERT_TRUE(doc.GetErrorMessage().empty());
        auto view = doc.View();
        ASSERT_TRUE(view.IsObject());
        ASSERT_EQ(-6.626e-34, view.GetDouble("testDoubleKey"));
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(doc.GetErrorMessage().c_str());
    }
}

TEST(DocumentTest, TestParseArray)
{
    const Aws::String docString = R"(["stringArrayEntry1", "stringArrayEntry2"])";
    Document doc(docString);
    if (doc.WasParseSuccessful())
    {
        ASSERT_TRUE(doc.GetErrorMessage().empty());
        auto view = doc.View();
        ASSERT_TRUE(view.IsListType());
        ASSERT_STREQ("stringArrayEntry1", view.AsArray()[0].AsString().c_str());
        ASSERT_STREQ("stringArrayEntry2", view.AsArray()[1].AsString().c_str());
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(doc.GetErrorMessage().c_str());
    }
}

TEST(DocumentTest, TestParseArrayValue)
{
    const Aws::String docString = R"({"array": ["stringArrayEntry1", "stringArrayEntry2"]})";
    Document doc(docString);
    if (doc.WasParseSuccessful())
    {
        ASSERT_TRUE(doc.GetErrorMessage().empty());
        auto view = doc.View();
        ASSERT_TRUE(view.IsObject());
        ASSERT_STREQ("stringArrayEntry1", view.GetArray("array")[0].AsString().c_str());
        ASSERT_STREQ("stringArrayEntry2", view.GetArray("array")[1].AsString().c_str());
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(doc.GetErrorMessage().c_str());
    }
}

TEST(DocumentTest, TestParseObjectValue)
{
    const Aws::String docString = R"({"object": {"testObjectStringKey":"testObjectStringValue"}})";
    Document doc(docString);
    if (doc.WasParseSuccessful())
    {
        ASSERT_TRUE(doc.GetErrorMessage().empty());
        auto view = doc.View();
        ASSERT_TRUE(view.IsObject());
        ASSERT_TRUE(view.GetObject("object").IsObject());
        ASSERT_STREQ("testObjectStringValue", view.GetObject("object").GetString("testObjectStringKey").c_str());
        ASSERT_STREQ("testObjectStringValue", view.GetObject("object").AsObject().GetString("testObjectStringKey").c_str());
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(doc.GetErrorMessage().c_str());
    }
}

const std::string docString = R"({
    "testStringKey":"testStringValue",
    "testBoolKey":false,
    "testIntKey":10,
    "testInt64Key":8765432109876543210,
    "testDoubleKey":6.626e-34,
    "array": ["stringArrayEntry1", "stringArrayEntry2"],
    "object": {"testObjectStringKey":"testObjectStringValue"}
})";

TEST(DocumentTest, TestParseJsonString)
{
    Document doc(Aws::String(docString.c_str()));
    if (doc.WasParseSuccessful())
    {
        auto view = doc.View();
        ASSERT_TRUE(doc.GetErrorMessage().empty());
        ASSERT_STREQ("testStringValue", view.GetString("testStringKey").c_str());
        ASSERT_FALSE(view.GetBool("testBoolKey"));
        ASSERT_EQ(10, view.GetInteger("testIntKey"));
        ASSERT_EQ(8765432109876543210, view.GetInt64("testInt64Key"));
        ASSERT_EQ(6.626e-34, view.GetDouble("testDoubleKey"));
        ASSERT_STREQ("stringArrayEntry1", view.GetArray("array")[0].AsString().c_str());
        ASSERT_STREQ("stringArrayEntry2", view.GetArray("array")[1].AsString().c_str());
        ASSERT_TRUE(view.GetObject("object").AsString().empty());
        ASSERT_STREQ("testObjectStringValue", view.GetObject("object").GetString("testObjectStringKey").c_str());
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(doc.GetErrorMessage().c_str());
    }
}

TEST(DocumentTest, TestParseJsonStream)
{
    Aws::StringStream inputAsStream(Aws::String(docString.c_str()));
    Document doc(inputAsStream);

    if (doc.WasParseSuccessful())
    {
        auto view = doc.View();
        ASSERT_TRUE(doc.GetErrorMessage().empty());
        ASSERT_STREQ("testStringValue", view.GetString("testStringKey").c_str());
        ASSERT_FALSE(view.GetBool("testBoolKey"));
        ASSERT_EQ(10, view.GetInteger("testIntKey"));
        ASSERT_EQ(8765432109876543210, view.GetInt64("testInt64Key"));
        ASSERT_EQ(6.626e-34, view.GetDouble("testDoubleKey"));
        ASSERT_STREQ("stringArrayEntry1", view.GetArray("array")[0].AsString().c_str());
        ASSERT_STREQ("stringArrayEntry2", view.GetArray("array")[1].AsString().c_str());
        ASSERT_TRUE(view.GetObject("object").AsString().empty());
        ASSERT_STREQ("testObjectStringValue", view.GetObject("object").GetString("testObjectStringKey").c_str());
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(doc.GetErrorMessage().c_str());
    }
}

TEST(DocumentTest, TestParseStringFailed)
{
    Document doc(Aws::String("blah blah blah"));
    ASSERT_FALSE(doc.WasParseSuccessful());
    ASSERT_FALSE(doc.GetErrorMessage().empty());
}

TEST(DocumentTest, TestParseStreamFailed)
{
    Aws::StringStream ss;
    ss << "{\"bla\" : blah blah";
    Document doc(ss);
    ASSERT_FALSE(doc.WasParseSuccessful());
    ASSERT_STREQ("Failed to parse JSON. Invalid input at: blah blah", doc.GetErrorMessage().c_str());
}

TEST(DocumentTest, TestCreateStringValue)
{
    Document doc;
    doc.WithString("testStringKey", "testStringValue");
    ASSERT_TRUE(doc.View().IsObject());
    ASSERT_STREQ("testStringValue", doc.View().GetString("testStringKey").c_str());

    doc.AsString("anotherTestString");
    ASSERT_TRUE(doc.View().IsString());
    ASSERT_STREQ("anotherTestString", doc.View().AsString().c_str());
}

TEST(DocumentTest, TestCreateBoolValue)
{
    Document doc;
    doc.WithBool("testBoolKey", false);
    ASSERT_TRUE(doc.View().IsObject());
    ASSERT_FALSE(doc.View().GetBool("testBoolKey"));

    doc.AsBool(true);
    ASSERT_TRUE(doc.View().IsBool());
    ASSERT_TRUE(doc.View().AsBool());
}

TEST(DocumentTest, TestCreateIntegerValue)
{
    Document doc;
    doc.WithInteger("testIntKey", 10);
    ASSERT_TRUE(doc.View().IsObject());
    ASSERT_EQ(10, doc.View().GetInteger("testIntKey"));

    doc.AsInteger(15);
    ASSERT_TRUE(doc.View().IsIntegerType());
    ASSERT_FALSE(doc.View().IsFloatingPointType());
    ASSERT_EQ(15, doc.View().AsInteger());
}

TEST(DocumentTest, TestCreateInt64Value)
{
    Document doc;
    doc.WithInt64("testInt64Key", INT64_MIN);
    ASSERT_TRUE(doc.View().IsObject());
    ASSERT_EQ(INT64_MIN, doc.View().GetInt64("testInt64Key"));
    doc.WithInt64("testInt64Key", INT64_MIN + 1);
    ASSERT_EQ(INT64_MIN + 1, doc.View().GetInt64("testInt64Key"));
    doc.WithInt64("testInt64Key", INT64_MAX);
    ASSERT_EQ(INT64_MAX, doc.View().GetInt64("testInt64Key"));
    doc.WithInt64("testInt64Key", INT64_MAX - 1);
    ASSERT_EQ(INT64_MAX - 1, doc.View().GetInt64("testInt64Key"));

    doc.AsInt64(INT64_MIN);
    ASSERT_EQ(INT64_MIN, doc.View().AsInt64());
    ASSERT_TRUE(doc.View().IsIntegerType());
    ASSERT_FALSE(doc.View().IsFloatingPointType());
    doc.AsInt64(INT64_MIN + 1);
    ASSERT_EQ(INT64_MIN + 1, doc.View().AsInt64());
    ASSERT_TRUE(doc.View().IsIntegerType());
    ASSERT_FALSE(doc.View().IsFloatingPointType());
    doc.AsInt64(INT64_MAX);
    ASSERT_EQ(INT64_MAX, doc.View().AsInt64());
    ASSERT_TRUE(doc.View().IsIntegerType());
    ASSERT_FALSE(doc.View().IsFloatingPointType());
    doc.AsInt64(INT64_MAX - 1);
    ASSERT_EQ(INT64_MAX - 1, doc.View().AsInt64());
    ASSERT_TRUE(doc.View().IsIntegerType());
    ASSERT_FALSE(doc.View().IsFloatingPointType());
}

TEST(DocumentTest, TestCreateDoubleValue)
{
    Document doc;
    doc.WithDouble("testDoubleKey", 6.626e-34);
    ASSERT_TRUE(doc.View().IsObject());
    ASSERT_EQ(6.626e-34, doc.View().GetDouble("testDoubleKey"));

    doc.AsDouble(2.71828182845);
    ASSERT_TRUE(doc.View().IsFloatingPointType());
    ASSERT_FALSE(doc.View().IsIntegerType());
    ASSERT_EQ(2.71828182845, doc.View().AsDouble());
}

TEST(DocumentTest, TestCreateArrayValue)
{
    Document doc;
    Array<Document> arrayDoc(2);
    Document doc1;
    Document doc2;
    arrayDoc[0] = doc1.AsString("testArrayValue1");
    arrayDoc[1] = doc1.AsString("testArrayValue2");

    doc.WithArray("testArrayKey", arrayDoc);
    ASSERT_TRUE(doc.View().IsObject());
    Array<DocumentView> viewArray = doc.View().GetArray("testArrayKey");
    ASSERT_EQ(2uL, viewArray.GetLength());
    ASSERT_EQ("testArrayValue1", viewArray[0].AsString());
    ASSERT_EQ("testArrayValue2", viewArray[1].AsString());

    arrayDoc[0] = doc1.AsString("testArrayValue3");
    arrayDoc[1] = doc2.AsString("testArrayValue4");

    doc.AsArray(arrayDoc);
    ASSERT_TRUE(doc.View().IsListType());
    viewArray = doc.View().AsArray();
    ASSERT_EQ(2uL, viewArray.GetLength());
    ASSERT_EQ("testArrayValue3", viewArray[0].AsString());
    ASSERT_EQ("testArrayValue4", viewArray[1].AsString());
}

TEST(DocumentTest, TestCreateObjectValue)
{
    Document doc;
    Array<Document> arrayDoc(2);
    Document doc1;
    Document doc2;
    arrayDoc[0] = doc1.AsString("testArrayValue1");
    arrayDoc[1] = doc2.AsString("testArrayValue2");
    doc.WithArray("testArrayKey", arrayDoc);
    doc.WithString("testStringKey", "testStringValue");
    doc.WithBool("testBoolKey", false);
    doc.WithInteger("testIntegerKey", 10);
    doc.WithInt64("testInt64Key", -8765432109876543210);
    doc.WithDouble("testDoubleKey", -6.626e-34);

    Document object;
    object.WithObject("testObjectKey", doc);
    auto objectView = object.View();
    ASSERT_TRUE(objectView.IsObject());
    ASSERT_STREQ("testStringValue", objectView.GetObject("testObjectKey").GetString("testStringKey").c_str());
    ASSERT_FALSE(objectView.GetObject("testObjectKey").GetBool("testBoolKey"));
    ASSERT_EQ(10, objectView.GetObject("testObjectKey").GetInteger("testIntegerKey"));
    ASSERT_EQ(-8765432109876543210, objectView.GetObject("testObjectKey").GetInt64("testInt64Key"));
    ASSERT_EQ(-6.626e-34, objectView.GetObject("testObjectKey").GetDouble("testDoubleKey"));
    ASSERT_EQ(2uL, objectView.GetObject("testObjectKey").GetArray("testArrayKey").GetLength());
    ASSERT_EQ("testArrayValue1", objectView.GetObject("testObjectKey").GetArray("testArrayKey")[0].AsString());
    ASSERT_EQ("testArrayValue2", objectView.GetObject("testObjectKey").GetArray("testArrayKey")[1].AsString());

    object.AsObject(doc);
    objectView = object.View();
    ASSERT_TRUE(objectView.IsObject());
    ASSERT_STREQ("testStringValue", objectView.AsObject().GetString("testStringKey").c_str());
    ASSERT_FALSE(objectView.AsObject().GetBool("testBoolKey"));
    ASSERT_EQ(10, objectView.AsObject().GetInteger("testIntegerKey"));
    ASSERT_EQ(-8765432109876543210, objectView.AsObject().GetInt64("testInt64Key"));
    ASSERT_EQ(-6.626e-34, objectView.AsObject().GetDouble("testDoubleKey"));
    ASSERT_EQ(2uL, objectView.AsObject().GetArray("testArrayKey").GetLength());
    ASSERT_EQ("testArrayValue1", objectView.AsObject().GetArray("testArrayKey")[0].AsString());
    ASSERT_EQ("testArrayValue2", objectView.AsObject().GetArray("testArrayKey")[1].AsString());
}

TEST(DocumentTest, TestDocCompactSerializeObject)
{
    Document doc(Aws::String(docString.c_str()));
    Aws::String outputString = doc.View().WriteCompact();
    Document reparsedDoc(outputString);
    if (reparsedDoc.WasParseSuccessful())
    {
        auto view = doc.View();
        ASSERT_TRUE(doc.GetErrorMessage().empty());
        ASSERT_STREQ("testStringValue", view.GetString("testStringKey").c_str());
        ASSERT_FALSE(view.GetBool("testBoolKey"));
        ASSERT_EQ(10, view.GetInteger("testIntKey"));
        ASSERT_EQ(8765432109876543210, view.GetInt64("testInt64Key"));
        ASSERT_EQ(6.626e-34, view.GetDouble("testDoubleKey"));
        ASSERT_STREQ("stringArrayEntry1", view.GetArray("array")[0].AsString().c_str());
        ASSERT_STREQ("stringArrayEntry2", view.GetArray("array")[1].AsString().c_str());
        ASSERT_STREQ("testObjectStringValue", view.GetObject("object").GetString("testObjectStringKey").c_str());
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(reparsedDoc.GetErrorMessage().c_str());
    }
}

TEST(DocumentTest, TestJsonStyledSerializeObject)
{
    Document doc(Aws::String(docString.c_str()));
    Aws::String outputString = doc.View().WriteReadable();
    Document reparsedDoc(outputString);
    if (reparsedDoc.WasParseSuccessful())
    {
        auto view = doc.View();
        ASSERT_TRUE(doc.GetErrorMessage().empty());
        ASSERT_STREQ("testStringValue", view.GetString("testStringKey").c_str());
        ASSERT_FALSE(view.GetBool("testBoolKey"));
        ASSERT_EQ(10, view.GetInteger("testIntKey"));
        ASSERT_EQ(8765432109876543210, view.GetInt64("testInt64Key"));
        ASSERT_EQ(6.626e-34, view.GetDouble("testDoubleKey"));
        ASSERT_STREQ("stringArrayEntry1", view.GetArray("array")[0].AsString().c_str());
        ASSERT_STREQ("stringArrayEntry2", view.GetArray("array")[1].AsString().c_str());
        ASSERT_STREQ("testObjectStringValue", view.GetObject("object").GetString("testObjectStringKey").c_str());
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(reparsedDoc.GetErrorMessage().c_str());
    }
}

TEST(DocumentTest, TestNullSanity)
{
    Document doc;
    DocumentView view = doc.View();
    ASSERT_STREQ("null", view.WriteReadable().c_str());
    ASSERT_STREQ("null", view.WriteCompact().c_str());
    auto map = view.GetAllObjects();
    ASSERT_TRUE(map.empty());
    ASSERT_FALSE(view.ValueExists("null"));
}

TEST(DocumentTest, TestKeyValueExists)
{
    auto input = R"({"AWS" : {
        "key" : "value",
        "nullKey" : null
    }})";
    Document doc(input);
    auto view = doc.View().GetObject("AWS");

    ASSERT_TRUE(view.ValueExists("key"));
    ASSERT_FALSE(view.ValueExists("nullKey"));
    ASSERT_FALSE(view.ValueExists("notExistsKey"));

    ASSERT_TRUE(view.KeyExists("key"));
    ASSERT_TRUE(view.KeyExists("nullKey"));
    ASSERT_FALSE(view.KeyExists("notExistsKey"));
}

TEST(DocumentTest, TestCopy)
{
    Document doc;
    ASSERT_TRUE(doc.WasParseSuccessful());
    Document copiedDoc(doc);
    ASSERT_TRUE(copiedDoc.WasParseSuccessful());
    Document copiedDoc2;
    copiedDoc2 = doc;
    ASSERT_TRUE(copiedDoc2.WasParseSuccessful());
    Document bad(Aws::String("not valid json"));
    ASSERT_FALSE(bad.WasParseSuccessful());
    copiedDoc = bad;
    ASSERT_FALSE(copiedDoc.WasParseSuccessful());
}

TEST(DocumentTest, TestMove)
{
    Document doc;
    ASSERT_TRUE(doc.WasParseSuccessful());
    Document movedDoc(doc);
    ASSERT_TRUE(movedDoc.WasParseSuccessful());
    Document movedDoc2;
    movedDoc2 = doc;
    ASSERT_TRUE(movedDoc2.WasParseSuccessful());
    Document bad(Aws::String("not valid json"));
    ASSERT_FALSE(bad.WasParseSuccessful());
    movedDoc = bad;
    ASSERT_FALSE(movedDoc.WasParseSuccessful());
}

TEST(DocumentTest, TestBuilderPatternReplacesKeys)
{
    auto input = R"({"AWS" : {
        "stringKey" : "StringValue",
        "intKey" : 42
    }})";

    Document doc(input);
    auto modified = doc.View().GetObject("AWS")
        .Materialize()
        .WithString("stringKey", "anotherStringValue")
        .WithInteger("intKey", 43);
    const auto output = doc.WithObject("AWS", modified).View().WriteCompact();
    const auto expected = R"({"AWS":{"stringKey":"anotherStringValue","intKey":43}})";
    ASSERT_STREQ(expected, output.c_str());
}

TEST(DocumentTest, TestGetAllObjects)
{
    auto input = R"({"AWS" : {
        "stringKey" : "StringValue",
        "intKey" : 42
    }})";

    Document doc(input);
    auto docView = doc.View();
    ASSERT_EQ(1u, docView.GetAllObjects().size());
    auto all = docView.GetObject("AWS").GetAllObjects();
    ASSERT_EQ(2u, all.size());
    ASSERT_STREQ("StringValue", all["stringKey"].AsString().c_str());
    ASSERT_EQ(42, all["intKey"].AsInteger());
}

TEST(DocumentTest, TestEquality)
{
    auto input = R"({"AWS" : {
        "stringKey" : "StringValue",
        "intKey" : 42
    }})";

    Document parsed(input);
    Document keys;
    keys.WithString("stringKey", "StringValue").WithInteger("intKey", 42);

    Document built;
    built.WithObject("AWS", keys);
    ASSERT_EQ(parsed, built);
    built.WithString("AWS", "Amazon Web Services");
    ASSERT_NE(parsed, built);
}

#if ENABLE_FUNCTIONAL_TESTING
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/client/DefaultRetryStrategy.h>
#include <aws/testing/mocks/aws/client/MockAWSClient.h>
#include <aws/document-test/DocumentTestClient.h>
#include <aws/document-test/model/DocumentTypeOperationRequest.h>

using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace Aws::Utils::Json;
using namespace Aws::DocumentTest;
using namespace Aws::DocumentTest::Model;

static const char ALLOCATION_TAG[] = "DocumentTest";

TEST(DocumentTest, TestRequestResponseBody)
{
    std::shared_ptr<MockHttpClient> mockHttpClient = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
    std::shared_ptr<MockHttpClientFactory> mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(ALLOCATION_TAG);
    mockHttpClientFactory->SetClient(mockHttpClient);
    SetHttpClientFactory(mockHttpClientFactory);

    auto httpRequest = CreateHttpRequest(URI("http://www.uri.com/path/to/res"),
            HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    httpRequest->SetResolvedRemoteHost("127.0.0.1");
    auto httpResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, httpRequest);
    httpResponse->SetResponseCode(Aws::Http::HttpResponseCode::OK);
    httpResponse->GetResponseBody() << R"({
        "StringTypeMember": "ResponseStringMember",
        "DocumentTypeMember": {
            "AWS": {
                "boolKey": false,
                "doubleKey": 6.626e-34
            }
        }
    })";
    mockHttpClient->AddResponseToReturn(httpResponse);

    Aws::Client::ClientConfiguration config;
    config.retryStrategy = Aws::MakeShared<Aws::Client::DefaultRetryStrategy>(ALLOCATION_TAG, 0 /* don't retry */, 25);
    DocumentTestClient client(config);
    DocumentTypeOperationRequest request;
    request.SetStringTypeMember("RequestStringMember");
    Document doc(R"({"AWS" : {
        "stringKey" : "StringValue",
        "intKey" : 42
    }})");
    request.SetDocumentTypeMember(doc);

    auto outcome = client.DocumentTypeOperation(request);
    AWS_ASSERT_SUCCESS(outcome);

    JsonValue expectedRequestBody;
    expectedRequestBody.WithString("StringTypeMember", "RequestStringMember");
    expectedRequestBody.WithObject("DocumentTypeMember", JsonValue(doc.View()));
    Aws::StringStream ss;
    ss << request.GetBody()->rdbuf();
    JsonValue actualRequestBody(ss.str());
    ASSERT_EQ(expectedRequestBody, actualRequestBody);

    ASSERT_STREQ("ResponseStringMember", outcome.GetResult().GetStringTypeMember().c_str());
    DocumentView view = outcome.GetResult().GetDocumentTypeMember();
    ASSERT_TRUE(view.KeyExists("AWS"));
    ASSERT_FALSE(view.GetObject("AWS").GetBool("boolKey"));
    ASSERT_EQ(6.626e-34, view.GetObject("AWS").GetDouble("doubleKey"));

    // Test null sanity
    auto httpRequestWithNullDoc = CreateHttpRequest(URI("http://www.uri.com/path/to/res"),
            HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    httpRequestWithNullDoc->SetResolvedRemoteHost("127.0.0.1");
    auto httpResponseWithNullDoc = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, httpRequestWithNullDoc);
    httpResponseWithNullDoc->SetResponseCode(Aws::Http::HttpResponseCode::OK);
    httpResponseWithNullDoc->GetResponseBody() << R"({
        "StringTypeMember": "ResponseStringMember",
        "DocumentTypeMember": null
    })";
    mockHttpClient->AddResponseToReturn(httpResponseWithNullDoc);

    Document nullDoc("null");
    request.SetDocumentTypeMember(nullDoc);

    outcome = client.DocumentTypeOperation(request);
    AWS_ASSERT_SUCCESS(outcome);

    JsonValue expectedRequestBodyWithNullDoc;
    expectedRequestBodyWithNullDoc.WithString("StringTypeMember", "RequestStringMember");
    ss.str("");
    ss << request.GetBody()->rdbuf();
    JsonValue actualRequestBodyWithNullDoc(ss.str());
    ASSERT_EQ(expectedRequestBodyWithNullDoc, actualRequestBodyWithNullDoc);

    ASSERT_STREQ("ResponseStringMember", outcome.GetResult().GetStringTypeMember().c_str());
    ASSERT_STREQ("null", outcome.GetResult().GetDocumentTypeMember().WriteCompact().c_str());

    CleanupHttp();
    InitHttp();
}
#endif // ENABLE_FUNCTIONAL_TESTING
