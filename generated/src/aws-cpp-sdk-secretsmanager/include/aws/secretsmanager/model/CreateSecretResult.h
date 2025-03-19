/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/secretsmanager/model/ReplicationStatusType.h>
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
namespace SecretsManager
{
namespace Model
{
  class CreateSecretResult
  {
  public:
    AWS_SECRETSMANAGER_API CreateSecretResult() = default;
    AWS_SECRETSMANAGER_API CreateSecretResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API CreateSecretResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the new secret. The ARN includes the name of the secret followed
     * by six random characters. This ensures that if you create a new secret with the
     * same name as a deleted secret, then users with access to the old secret don't
     * get access to the new secret because the ARNs are different.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    CreateSecretResult& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new secret.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateSecretResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier associated with the version of the new secret.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    CreateSecretResult& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the replicas of this secret and their status:</p> <ul> <li> <p>
     * <code>Failed</code>, which indicates that the replica was not created.</p> </li>
     * <li> <p> <code>InProgress</code>, which indicates that Secrets Manager is in the
     * process of creating the replica.</p> </li> <li> <p> <code>InSync</code>, which
     * indicates that the replica was created.</p> </li> </ul>
     */
    inline const Aws::Vector<ReplicationStatusType>& GetReplicationStatus() const { return m_replicationStatus; }
    template<typename ReplicationStatusT = Aws::Vector<ReplicationStatusType>>
    void SetReplicationStatus(ReplicationStatusT&& value) { m_replicationStatusHasBeenSet = true; m_replicationStatus = std::forward<ReplicationStatusT>(value); }
    template<typename ReplicationStatusT = Aws::Vector<ReplicationStatusType>>
    CreateSecretResult& WithReplicationStatus(ReplicationStatusT&& value) { SetReplicationStatus(std::forward<ReplicationStatusT>(value)); return *this;}
    template<typename ReplicationStatusT = ReplicationStatusType>
    CreateSecretResult& AddReplicationStatus(ReplicationStatusT&& value) { m_replicationStatusHasBeenSet = true; m_replicationStatus.emplace_back(std::forward<ReplicationStatusT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSecretResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::Vector<ReplicationStatusType> m_replicationStatus;
    bool m_replicationStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
