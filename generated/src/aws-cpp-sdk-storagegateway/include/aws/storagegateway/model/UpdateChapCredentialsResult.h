/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the following fields:</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateChapCredentialsOutput">AWS
   * API Reference</a></p>
   */
  class UpdateChapCredentialsResult
  {
  public:
    AWS_STORAGEGATEWAY_API UpdateChapCredentialsResult();
    AWS_STORAGEGATEWAY_API UpdateChapCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API UpdateChapCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target. This is the same target
     * specified in the request.</p>
     */
    inline const Aws::String& GetTargetARN() const{ return m_targetARN; }
    inline void SetTargetARN(const Aws::String& value) { m_targetARN = value; }
    inline void SetTargetARN(Aws::String&& value) { m_targetARN = std::move(value); }
    inline void SetTargetARN(const char* value) { m_targetARN.assign(value); }
    inline UpdateChapCredentialsResult& WithTargetARN(const Aws::String& value) { SetTargetARN(value); return *this;}
    inline UpdateChapCredentialsResult& WithTargetARN(Aws::String&& value) { SetTargetARN(std::move(value)); return *this;}
    inline UpdateChapCredentialsResult& WithTargetARN(const char* value) { SetTargetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The iSCSI initiator that connects to the target. This is the same initiator
     * name specified in the request.</p>
     */
    inline const Aws::String& GetInitiatorName() const{ return m_initiatorName; }
    inline void SetInitiatorName(const Aws::String& value) { m_initiatorName = value; }
    inline void SetInitiatorName(Aws::String&& value) { m_initiatorName = std::move(value); }
    inline void SetInitiatorName(const char* value) { m_initiatorName.assign(value); }
    inline UpdateChapCredentialsResult& WithInitiatorName(const Aws::String& value) { SetInitiatorName(value); return *this;}
    inline UpdateChapCredentialsResult& WithInitiatorName(Aws::String&& value) { SetInitiatorName(std::move(value)); return *this;}
    inline UpdateChapCredentialsResult& WithInitiatorName(const char* value) { SetInitiatorName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateChapCredentialsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateChapCredentialsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateChapCredentialsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_targetARN;

    Aws::String m_initiatorName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
