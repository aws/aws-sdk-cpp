/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaConnect
{
namespace Model
{
  class RemoveFlowSourceResult
  {
  public:
    AWS_MEDIACONNECT_API RemoveFlowSourceResult();
    AWS_MEDIACONNECT_API RemoveFlowSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API RemoveFlowSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the flow that is associated with the source you removed.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The ARN of the flow that is associated with the source you removed.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }

    /**
     * The ARN of the flow that is associated with the source you removed.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }

    /**
     * The ARN of the flow that is associated with the source you removed.
     */
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }

    /**
     * The ARN of the flow that is associated with the source you removed.
     */
    inline RemoveFlowSourceResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The ARN of the flow that is associated with the source you removed.
     */
    inline RemoveFlowSourceResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The ARN of the flow that is associated with the source you removed.
     */
    inline RemoveFlowSourceResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The ARN of the source that was removed.
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * The ARN of the source that was removed.
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArn = value; }

    /**
     * The ARN of the source that was removed.
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArn = std::move(value); }

    /**
     * The ARN of the source that was removed.
     */
    inline void SetSourceArn(const char* value) { m_sourceArn.assign(value); }

    /**
     * The ARN of the source that was removed.
     */
    inline RemoveFlowSourceResult& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * The ARN of the source that was removed.
     */
    inline RemoveFlowSourceResult& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * The ARN of the source that was removed.
     */
    inline RemoveFlowSourceResult& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}

  private:

    Aws::String m_flowArn;

    Aws::String m_sourceArn;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
