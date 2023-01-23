/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/ContentData.h>
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
  class CreateContentResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API CreateContentResult();
    AWS_CONNECTWISDOMSERVICE_API CreateContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API CreateContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The content.</p>
     */
    inline const ContentData& GetContent() const{ return m_content; }

    /**
     * <p>The content.</p>
     */
    inline void SetContent(const ContentData& value) { m_content = value; }

    /**
     * <p>The content.</p>
     */
    inline void SetContent(ContentData&& value) { m_content = std::move(value); }

    /**
     * <p>The content.</p>
     */
    inline CreateContentResult& WithContent(const ContentData& value) { SetContent(value); return *this;}

    /**
     * <p>The content.</p>
     */
    inline CreateContentResult& WithContent(ContentData&& value) { SetContent(std::move(value)); return *this;}

  private:

    ContentData m_content;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
