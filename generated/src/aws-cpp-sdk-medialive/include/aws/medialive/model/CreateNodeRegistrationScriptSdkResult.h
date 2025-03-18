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
    AWS_MEDIALIVE_API CreateNodeRegistrationScriptSdkResult() = default;
    AWS_MEDIALIVE_API CreateNodeRegistrationScriptSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API CreateNodeRegistrationScriptSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A script that can be run on a Bring Your Own Device Elemental Anywhere system to
     * create a node in a cluster.
     */
    inline const Aws::String& GetNodeRegistrationScript() const { return m_nodeRegistrationScript; }
    template<typename NodeRegistrationScriptT = Aws::String>
    void SetNodeRegistrationScript(NodeRegistrationScriptT&& value) { m_nodeRegistrationScriptHasBeenSet = true; m_nodeRegistrationScript = std::forward<NodeRegistrationScriptT>(value); }
    template<typename NodeRegistrationScriptT = Aws::String>
    CreateNodeRegistrationScriptSdkResult& WithNodeRegistrationScript(NodeRegistrationScriptT&& value) { SetNodeRegistrationScript(std::forward<NodeRegistrationScriptT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateNodeRegistrationScriptSdkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nodeRegistrationScript;
    bool m_nodeRegistrationScriptHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
