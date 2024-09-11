/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for CreateNodeRegistrationScriptResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateNodeRegistrationScriptResponse">AWS
   * API Reference</a></p>
   */
  class CreateNodeRegistrationScriptSdkResult
  {
  public:
    AWS_MEDIALIVE_API CreateNodeRegistrationScriptSdkResult();
    AWS_MEDIALIVE_API CreateNodeRegistrationScriptSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API CreateNodeRegistrationScriptSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A script that can be run on a Bring Your Own Device Elemental Anywhere system to
     * create a node in a cluster.
     */
    inline const Aws::String& GetNodeRegistrationScript() const{ return m_nodeRegistrationScript; }
    inline void SetNodeRegistrationScript(const Aws::String& value) { m_nodeRegistrationScript = value; }
    inline void SetNodeRegistrationScript(Aws::String&& value) { m_nodeRegistrationScript = std::move(value); }
    inline void SetNodeRegistrationScript(const char* value) { m_nodeRegistrationScript.assign(value); }
    inline CreateNodeRegistrationScriptSdkResult& WithNodeRegistrationScript(const Aws::String& value) { SetNodeRegistrationScript(value); return *this;}
    inline CreateNodeRegistrationScriptSdkResult& WithNodeRegistrationScript(Aws::String&& value) { SetNodeRegistrationScript(std::move(value)); return *this;}
    inline CreateNodeRegistrationScriptSdkResult& WithNodeRegistrationScript(const char* value) { SetNodeRegistrationScript(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateNodeRegistrationScriptSdkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateNodeRegistrationScriptSdkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateNodeRegistrationScriptSdkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nodeRegistrationScript;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
