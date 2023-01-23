/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/ContentSummary.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class GetContentSummaryResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API GetContentSummaryResult();
    AWS_CONNECTWISDOMSERVICE_API GetContentSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API GetContentSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The content summary.</p>
     */
    inline const ContentSummary& GetContentSummary() const{ return m_contentSummary; }

    /**
     * <p>The content summary.</p>
     */
    inline void SetContentSummary(const ContentSummary& value) { m_contentSummary = value; }

    /**
     * <p>The content summary.</p>
     */
    inline void SetContentSummary(ContentSummary&& value) { m_contentSummary = std::move(value); }

    /**
     * <p>The content summary.</p>
     */
    inline GetContentSummaryResult& WithContentSummary(const ContentSummary& value) { SetContentSummary(value); return *this;}

    /**
     * <p>The content summary.</p>
     */
    inline GetContentSummaryResult& WithContentSummary(ContentSummary&& value) { SetContentSummary(std::move(value)); return *this;}

  private:

    ContentSummary m_contentSummary;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
