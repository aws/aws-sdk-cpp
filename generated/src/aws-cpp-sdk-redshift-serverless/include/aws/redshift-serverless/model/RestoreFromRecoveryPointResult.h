/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/Namespace.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class RestoreFromRecoveryPointResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API RestoreFromRecoveryPointResult() = default;
    AWS_REDSHIFTSERVERLESS_API RestoreFromRecoveryPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API RestoreFromRecoveryPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The namespace that data was restored into.</p>
     */
    inline const Namespace& GetNamespace() const { return m_namespace; }
    template<typename NamespaceT = Namespace>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Namespace>
    RestoreFromRecoveryPointResult& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the recovery point used for the restore.</p>
     */
    inline const Aws::String& GetRecoveryPointId() const { return m_recoveryPointId; }
    template<typename RecoveryPointIdT = Aws::String>
    void SetRecoveryPointId(RecoveryPointIdT&& value) { m_recoveryPointIdHasBeenSet = true; m_recoveryPointId = std::forward<RecoveryPointIdT>(value); }
    template<typename RecoveryPointIdT = Aws::String>
    RestoreFromRecoveryPointResult& WithRecoveryPointId(RecoveryPointIdT&& value) { SetRecoveryPointId(std::forward<RecoveryPointIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RestoreFromRecoveryPointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Namespace m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_recoveryPointId;
    bool m_recoveryPointIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
