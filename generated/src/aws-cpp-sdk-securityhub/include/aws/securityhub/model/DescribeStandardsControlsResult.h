/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/StandardsControl.h>
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
namespace SecurityHub
{
namespace Model
{
  class DescribeStandardsControlsResult
  {
  public:
    AWS_SECURITYHUB_API DescribeStandardsControlsResult();
    AWS_SECURITYHUB_API DescribeStandardsControlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API DescribeStandardsControlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of security standards controls.</p>
     */
    inline const Aws::Vector<StandardsControl>& GetControls() const{ return m_controls; }

    /**
     * <p>A list of security standards controls.</p>
     */
    inline void SetControls(const Aws::Vector<StandardsControl>& value) { m_controls = value; }

    /**
     * <p>A list of security standards controls.</p>
     */
    inline void SetControls(Aws::Vector<StandardsControl>&& value) { m_controls = std::move(value); }

    /**
     * <p>A list of security standards controls.</p>
     */
    inline DescribeStandardsControlsResult& WithControls(const Aws::Vector<StandardsControl>& value) { SetControls(value); return *this;}

    /**
     * <p>A list of security standards controls.</p>
     */
    inline DescribeStandardsControlsResult& WithControls(Aws::Vector<StandardsControl>&& value) { SetControls(std::move(value)); return *this;}

    /**
     * <p>A list of security standards controls.</p>
     */
    inline DescribeStandardsControlsResult& AddControls(const StandardsControl& value) { m_controls.push_back(value); return *this; }

    /**
     * <p>A list of security standards controls.</p>
     */
    inline DescribeStandardsControlsResult& AddControls(StandardsControl&& value) { m_controls.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline DescribeStandardsControlsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline DescribeStandardsControlsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline DescribeStandardsControlsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<StandardsControl> m_controls;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
