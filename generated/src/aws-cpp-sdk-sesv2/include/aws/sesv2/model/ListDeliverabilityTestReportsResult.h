/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/DeliverabilityTestReport.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{
  /**
   * <p>A list of the predictive inbox placement test reports that are available for
   * your account, regardless of whether or not those tests are
   * complete.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListDeliverabilityTestReportsResponse">AWS
   * API Reference</a></p>
   */
  class ListDeliverabilityTestReportsResult
  {
  public:
    AWS_SESV2_API ListDeliverabilityTestReportsResult();
    AWS_SESV2_API ListDeliverabilityTestReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListDeliverabilityTestReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains a lists of predictive inbox placement tests that
     * you've performed.</p>
     */
    inline const Aws::Vector<DeliverabilityTestReport>& GetDeliverabilityTestReports() const{ return m_deliverabilityTestReports; }

    /**
     * <p>An object that contains a lists of predictive inbox placement tests that
     * you've performed.</p>
     */
    inline void SetDeliverabilityTestReports(const Aws::Vector<DeliverabilityTestReport>& value) { m_deliverabilityTestReports = value; }

    /**
     * <p>An object that contains a lists of predictive inbox placement tests that
     * you've performed.</p>
     */
    inline void SetDeliverabilityTestReports(Aws::Vector<DeliverabilityTestReport>&& value) { m_deliverabilityTestReports = std::move(value); }

    /**
     * <p>An object that contains a lists of predictive inbox placement tests that
     * you've performed.</p>
     */
    inline ListDeliverabilityTestReportsResult& WithDeliverabilityTestReports(const Aws::Vector<DeliverabilityTestReport>& value) { SetDeliverabilityTestReports(value); return *this;}

    /**
     * <p>An object that contains a lists of predictive inbox placement tests that
     * you've performed.</p>
     */
    inline ListDeliverabilityTestReportsResult& WithDeliverabilityTestReports(Aws::Vector<DeliverabilityTestReport>&& value) { SetDeliverabilityTestReports(std::move(value)); return *this;}

    /**
     * <p>An object that contains a lists of predictive inbox placement tests that
     * you've performed.</p>
     */
    inline ListDeliverabilityTestReportsResult& AddDeliverabilityTestReports(const DeliverabilityTestReport& value) { m_deliverabilityTestReports.push_back(value); return *this; }

    /**
     * <p>An object that contains a lists of predictive inbox placement tests that
     * you've performed.</p>
     */
    inline ListDeliverabilityTestReportsResult& AddDeliverabilityTestReports(DeliverabilityTestReport&& value) { m_deliverabilityTestReports.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates that there are additional predictive inbox placement
     * tests to list. To view additional predictive inbox placement tests, issue
     * another request to <code>ListDeliverabilityTestReports</code>, and pass this
     * token in the <code>NextToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates that there are additional predictive inbox placement
     * tests to list. To view additional predictive inbox placement tests, issue
     * another request to <code>ListDeliverabilityTestReports</code>, and pass this
     * token in the <code>NextToken</code> parameter.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates that there are additional predictive inbox placement
     * tests to list. To view additional predictive inbox placement tests, issue
     * another request to <code>ListDeliverabilityTestReports</code>, and pass this
     * token in the <code>NextToken</code> parameter.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates that there are additional predictive inbox placement
     * tests to list. To view additional predictive inbox placement tests, issue
     * another request to <code>ListDeliverabilityTestReports</code>, and pass this
     * token in the <code>NextToken</code> parameter.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates that there are additional predictive inbox placement
     * tests to list. To view additional predictive inbox placement tests, issue
     * another request to <code>ListDeliverabilityTestReports</code>, and pass this
     * token in the <code>NextToken</code> parameter.</p>
     */
    inline ListDeliverabilityTestReportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates that there are additional predictive inbox placement
     * tests to list. To view additional predictive inbox placement tests, issue
     * another request to <code>ListDeliverabilityTestReports</code>, and pass this
     * token in the <code>NextToken</code> parameter.</p>
     */
    inline ListDeliverabilityTestReportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates that there are additional predictive inbox placement
     * tests to list. To view additional predictive inbox placement tests, issue
     * another request to <code>ListDeliverabilityTestReports</code>, and pass this
     * token in the <code>NextToken</code> parameter.</p>
     */
    inline ListDeliverabilityTestReportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DeliverabilityTestReport> m_deliverabilityTestReports;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
