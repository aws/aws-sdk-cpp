/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class UpdateRecoveryGroupResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API UpdateRecoveryGroupResult();
    AWS_ROUTE53RECOVERYREADINESS_API UpdateRecoveryGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API UpdateRecoveryGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<Aws::String>& GetCells() const{ return m_cells; }
    inline void SetCells(const Aws::Vector<Aws::String>& value) { m_cells = value; }
    inline void SetCells(Aws::Vector<Aws::String>&& value) { m_cells = std::move(value); }
    inline UpdateRecoveryGroupResult& WithCells(const Aws::Vector<Aws::String>& value) { SetCells(value); return *this;}
    inline UpdateRecoveryGroupResult& WithCells(Aws::Vector<Aws::String>&& value) { SetCells(std::move(value)); return *this;}
    inline UpdateRecoveryGroupResult& AddCells(const Aws::String& value) { m_cells.push_back(value); return *this; }
    inline UpdateRecoveryGroupResult& AddCells(Aws::String&& value) { m_cells.push_back(std::move(value)); return *this; }
    inline UpdateRecoveryGroupResult& AddCells(const char* value) { m_cells.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the recovery group.</p>
     */
    inline const Aws::String& GetRecoveryGroupArn() const{ return m_recoveryGroupArn; }
    inline void SetRecoveryGroupArn(const Aws::String& value) { m_recoveryGroupArn = value; }
    inline void SetRecoveryGroupArn(Aws::String&& value) { m_recoveryGroupArn = std::move(value); }
    inline void SetRecoveryGroupArn(const char* value) { m_recoveryGroupArn.assign(value); }
    inline UpdateRecoveryGroupResult& WithRecoveryGroupArn(const Aws::String& value) { SetRecoveryGroupArn(value); return *this;}
    inline UpdateRecoveryGroupResult& WithRecoveryGroupArn(Aws::String&& value) { SetRecoveryGroupArn(std::move(value)); return *this;}
    inline UpdateRecoveryGroupResult& WithRecoveryGroupArn(const char* value) { SetRecoveryGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the recovery group.</p>
     */
    inline const Aws::String& GetRecoveryGroupName() const{ return m_recoveryGroupName; }
    inline void SetRecoveryGroupName(const Aws::String& value) { m_recoveryGroupName = value; }
    inline void SetRecoveryGroupName(Aws::String&& value) { m_recoveryGroupName = std::move(value); }
    inline void SetRecoveryGroupName(const char* value) { m_recoveryGroupName.assign(value); }
    inline UpdateRecoveryGroupResult& WithRecoveryGroupName(const Aws::String& value) { SetRecoveryGroupName(value); return *this;}
    inline UpdateRecoveryGroupResult& WithRecoveryGroupName(Aws::String&& value) { SetRecoveryGroupName(std::move(value)); return *this;}
    inline UpdateRecoveryGroupResult& WithRecoveryGroupName(const char* value) { SetRecoveryGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline UpdateRecoveryGroupResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline UpdateRecoveryGroupResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdateRecoveryGroupResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline UpdateRecoveryGroupResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateRecoveryGroupResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateRecoveryGroupResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateRecoveryGroupResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateRecoveryGroupResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateRecoveryGroupResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateRecoveryGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateRecoveryGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateRecoveryGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_cells;

    Aws::String m_recoveryGroupArn;

    Aws::String m_recoveryGroupName;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
