﻿/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeleteChapCredentialsOutput">AWS
   * API Reference</a></p>
   */
  class DeleteChapCredentialsResult
  {
  public:
    AWS_STORAGEGATEWAY_API DeleteChapCredentialsResult();
    AWS_STORAGEGATEWAY_API DeleteChapCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DeleteChapCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target.</p>
     */
    inline const Aws::String& GetTargetARN() const{ return m_targetARN; }
    inline void SetTargetARN(const Aws::String& value) { m_targetARN = value; }
    inline void SetTargetARN(Aws::String&& value) { m_targetARN = std::move(value); }
    inline void SetTargetARN(const char* value) { m_targetARN.assign(value); }
    inline DeleteChapCredentialsResult& WithTargetARN(const Aws::String& value) { SetTargetARN(value); return *this;}
    inline DeleteChapCredentialsResult& WithTargetARN(Aws::String&& value) { SetTargetARN(std::move(value)); return *this;}
    inline DeleteChapCredentialsResult& WithTargetARN(const char* value) { SetTargetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The iSCSI initiator that connects to the target.</p>
     */
    inline const Aws::String& GetInitiatorName() const{ return m_initiatorName; }
    inline void SetInitiatorName(const Aws::String& value) { m_initiatorName = value; }
    inline void SetInitiatorName(Aws::String&& value) { m_initiatorName = std::move(value); }
    inline void SetInitiatorName(const char* value) { m_initiatorName.assign(value); }
    inline DeleteChapCredentialsResult& WithInitiatorName(const Aws::String& value) { SetInitiatorName(value); return *this;}
    inline DeleteChapCredentialsResult& WithInitiatorName(Aws::String&& value) { SetInitiatorName(std::move(value)); return *this;}
    inline DeleteChapCredentialsResult& WithInitiatorName(const char* value) { SetInitiatorName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteChapCredentialsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteChapCredentialsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteChapCredentialsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_targetARN;

    Aws::String m_initiatorName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
