/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sqs/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SQS
{
namespace Model
{
  class StartMessageMoveTaskResult
  {
  public:
    AWS_SQS_API StartMessageMoveTaskResult();
    AWS_SQS_API StartMessageMoveTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SQS_API StartMessageMoveTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An identifier associated with a message movement task. You can use this
     * identifier to cancel a specified message movement task using the
     * <code>CancelMessageMoveTask</code> action.</p>
     */
    inline const Aws::String& GetTaskHandle() const{ return m_taskHandle; }

    /**
     * <p>An identifier associated with a message movement task. You can use this
     * identifier to cancel a specified message movement task using the
     * <code>CancelMessageMoveTask</code> action.</p>
     */
    inline void SetTaskHandle(const Aws::String& value) { m_taskHandle = value; }

    /**
     * <p>An identifier associated with a message movement task. You can use this
     * identifier to cancel a specified message movement task using the
     * <code>CancelMessageMoveTask</code> action.</p>
     */
    inline void SetTaskHandle(Aws::String&& value) { m_taskHandle = std::move(value); }

    /**
     * <p>An identifier associated with a message movement task. You can use this
     * identifier to cancel a specified message movement task using the
     * <code>CancelMessageMoveTask</code> action.</p>
     */
    inline void SetTaskHandle(const char* value) { m_taskHandle.assign(value); }

    /**
     * <p>An identifier associated with a message movement task. You can use this
     * identifier to cancel a specified message movement task using the
     * <code>CancelMessageMoveTask</code> action.</p>
     */
    inline StartMessageMoveTaskResult& WithTaskHandle(const Aws::String& value) { SetTaskHandle(value); return *this;}

    /**
     * <p>An identifier associated with a message movement task. You can use this
     * identifier to cancel a specified message movement task using the
     * <code>CancelMessageMoveTask</code> action.</p>
     */
    inline StartMessageMoveTaskResult& WithTaskHandle(Aws::String&& value) { SetTaskHandle(std::move(value)); return *this;}

    /**
     * <p>An identifier associated with a message movement task. You can use this
     * identifier to cancel a specified message movement task using the
     * <code>CancelMessageMoveTask</code> action.</p>
     */
    inline StartMessageMoveTaskResult& WithTaskHandle(const char* value) { SetTaskHandle(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline StartMessageMoveTaskResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline StartMessageMoveTaskResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_taskHandle;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
