﻿/**
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
  class GetRecoveryGroupResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API GetRecoveryGroupResult();
    AWS_ROUTE53RECOVERYREADINESS_API GetRecoveryGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API GetRecoveryGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of a cell's Amazon Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<Aws::String>& GetCells() const{ return m_cells; }
    inline void SetCells(const Aws::Vector<Aws::String>& value) { m_cells = value; }
    inline void SetCells(Aws::Vector<Aws::String>&& value) { m_cells = std::move(value); }
    inline GetRecoveryGroupResult& WithCells(const Aws::Vector<Aws::String>& value) { SetCells(value); return *this;}
    inline GetRecoveryGroupResult& WithCells(Aws::Vector<Aws::String>&& value) { SetCells(std::move(value)); return *this;}
    inline GetRecoveryGroupResult& AddCells(const Aws::String& value) { m_cells.push_back(value); return *this; }
    inline GetRecoveryGroupResult& AddCells(Aws::String&& value) { m_cells.push_back(std::move(value)); return *this; }
    inline GetRecoveryGroupResult& AddCells(const char* value) { m_cells.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the recovery group.</p>
     */
    inline const Aws::String& GetRecoveryGroupArn() const{ return m_recoveryGroupArn; }
    inline void SetRecoveryGroupArn(const Aws::String& value) { m_recoveryGroupArn = value; }
    inline void SetRecoveryGroupArn(Aws::String&& value) { m_recoveryGroupArn = std::move(value); }
    inline void SetRecoveryGroupArn(const char* value) { m_recoveryGroupArn.assign(value); }
    inline GetRecoveryGroupResult& WithRecoveryGroupArn(const Aws::String& value) { SetRecoveryGroupArn(value); return *this;}
    inline GetRecoveryGroupResult& WithRecoveryGroupArn(Aws::String&& value) { SetRecoveryGroupArn(std::move(value)); return *this;}
    inline GetRecoveryGroupResult& WithRecoveryGroupArn(const char* value) { SetRecoveryGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the recovery group.</p>
     */
    inline const Aws::String& GetRecoveryGroupName() const{ return m_recoveryGroupName; }
    inline void SetRecoveryGroupName(const Aws::String& value) { m_recoveryGroupName = value; }
    inline void SetRecoveryGroupName(Aws::String&& value) { m_recoveryGroupName = std::move(value); }
    inline void SetRecoveryGroupName(const char* value) { m_recoveryGroupName.assign(value); }
    inline GetRecoveryGroupResult& WithRecoveryGroupName(const Aws::String& value) { SetRecoveryGroupName(value); return *this;}
    inline GetRecoveryGroupResult& WithRecoveryGroupName(Aws::String&& value) { SetRecoveryGroupName(std::move(value)); return *this;}
    inline GetRecoveryGroupResult& WithRecoveryGroupName(const char* value) { SetRecoveryGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the recovery group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetRecoveryGroupResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetRecoveryGroupResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetRecoveryGroupResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetRecoveryGroupResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetRecoveryGroupResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetRecoveryGroupResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetRecoveryGroupResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetRecoveryGroupResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetRecoveryGroupResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRecoveryGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRecoveryGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRecoveryGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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
