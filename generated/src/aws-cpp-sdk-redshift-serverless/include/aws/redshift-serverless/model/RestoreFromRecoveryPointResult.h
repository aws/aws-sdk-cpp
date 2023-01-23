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
    AWS_REDSHIFTSERVERLESS_API RestoreFromRecoveryPointResult();
    AWS_REDSHIFTSERVERLESS_API RestoreFromRecoveryPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API RestoreFromRecoveryPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The namespace that data was restored into.</p>
     */
    inline const Namespace& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace that data was restored into.</p>
     */
    inline void SetNamespace(const Namespace& value) { m_namespace = value; }

    /**
     * <p>The namespace that data was restored into.</p>
     */
    inline void SetNamespace(Namespace&& value) { m_namespace = std::move(value); }

    /**
     * <p>The namespace that data was restored into.</p>
     */
    inline RestoreFromRecoveryPointResult& WithNamespace(const Namespace& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace that data was restored into.</p>
     */
    inline RestoreFromRecoveryPointResult& WithNamespace(Namespace&& value) { SetNamespace(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the recovery point used for the restore.</p>
     */
    inline const Aws::String& GetRecoveryPointId() const{ return m_recoveryPointId; }

    /**
     * <p>The unique identifier of the recovery point used for the restore.</p>
     */
    inline void SetRecoveryPointId(const Aws::String& value) { m_recoveryPointId = value; }

    /**
     * <p>The unique identifier of the recovery point used for the restore.</p>
     */
    inline void SetRecoveryPointId(Aws::String&& value) { m_recoveryPointId = std::move(value); }

    /**
     * <p>The unique identifier of the recovery point used for the restore.</p>
     */
    inline void SetRecoveryPointId(const char* value) { m_recoveryPointId.assign(value); }

    /**
     * <p>The unique identifier of the recovery point used for the restore.</p>
     */
    inline RestoreFromRecoveryPointResult& WithRecoveryPointId(const Aws::String& value) { SetRecoveryPointId(value); return *this;}

    /**
     * <p>The unique identifier of the recovery point used for the restore.</p>
     */
    inline RestoreFromRecoveryPointResult& WithRecoveryPointId(Aws::String&& value) { SetRecoveryPointId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the recovery point used for the restore.</p>
     */
    inline RestoreFromRecoveryPointResult& WithRecoveryPointId(const char* value) { SetRecoveryPointId(value); return *this;}

  private:

    Namespace m_namespace;

    Aws::String m_recoveryPointId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
