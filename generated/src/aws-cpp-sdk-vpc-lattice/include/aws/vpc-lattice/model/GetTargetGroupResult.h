/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/TargetGroupConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vpc-lattice/model/TargetGroupStatus.h>
#include <aws/vpc-lattice/model/TargetGroupType.h>
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
namespace VPCLattice
{
namespace Model
{
  class GetTargetGroupResult
  {
  public:
    AWS_VPCLATTICE_API GetTargetGroupResult();
    AWS_VPCLATTICE_API GetTargetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API GetTargetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline GetTargetGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline GetTargetGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline GetTargetGroupResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The target group configuration.</p>
     */
    inline const TargetGroupConfig& GetConfig() const{ return m_config; }

    /**
     * <p>The target group configuration.</p>
     */
    inline void SetConfig(const TargetGroupConfig& value) { m_config = value; }

    /**
     * <p>The target group configuration.</p>
     */
    inline void SetConfig(TargetGroupConfig&& value) { m_config = std::move(value); }

    /**
     * <p>The target group configuration.</p>
     */
    inline GetTargetGroupResult& WithConfig(const TargetGroupConfig& value) { SetConfig(value); return *this;}

    /**
     * <p>The target group configuration.</p>
     */
    inline GetTargetGroupResult& WithConfig(TargetGroupConfig&& value) { SetConfig(std::move(value)); return *this;}


    /**
     * <p>The date and time that the target group was created, specified in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the target group was created, specified in ISO-8601
     * format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time that the target group was created, specified in ISO-8601
     * format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the target group was created, specified in ISO-8601
     * format.</p>
     */
    inline GetTargetGroupResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the target group was created, specified in ISO-8601
     * format.</p>
     */
    inline GetTargetGroupResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The failure code.</p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The failure code.</p>
     */
    inline void SetFailureCode(const Aws::String& value) { m_failureCode = value; }

    /**
     * <p>The failure code.</p>
     */
    inline void SetFailureCode(Aws::String&& value) { m_failureCode = std::move(value); }

    /**
     * <p>The failure code.</p>
     */
    inline void SetFailureCode(const char* value) { m_failureCode.assign(value); }

    /**
     * <p>The failure code.</p>
     */
    inline GetTargetGroupResult& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The failure code.</p>
     */
    inline GetTargetGroupResult& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}

    /**
     * <p>The failure code.</p>
     */
    inline GetTargetGroupResult& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}


    /**
     * <p>The failure message.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p>The failure message.</p>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessage = value; }

    /**
     * <p>The failure message.</p>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessage = std::move(value); }

    /**
     * <p>The failure message.</p>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessage.assign(value); }

    /**
     * <p>The failure message.</p>
     */
    inline GetTargetGroupResult& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>The failure message.</p>
     */
    inline GetTargetGroupResult& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}

    /**
     * <p>The failure message.</p>
     */
    inline GetTargetGroupResult& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}


    /**
     * <p>The ID of the target group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the target group.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the target group.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the target group.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the target group.</p>
     */
    inline GetTargetGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the target group.</p>
     */
    inline GetTargetGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the target group.</p>
     */
    inline GetTargetGroupResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The date and time that the target group was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The date and time that the target group was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The date and time that the target group was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The date and time that the target group was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline GetTargetGroupResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The date and time that the target group was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline GetTargetGroupResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The name of the target group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the target group.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the target group.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the target group.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the target group.</p>
     */
    inline GetTargetGroupResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the target group.</p>
     */
    inline GetTargetGroupResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the target group.</p>
     */
    inline GetTargetGroupResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceArns() const{ return m_serviceArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the service.</p>
     */
    inline void SetServiceArns(const Aws::Vector<Aws::String>& value) { m_serviceArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the service.</p>
     */
    inline void SetServiceArns(Aws::Vector<Aws::String>&& value) { m_serviceArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the service.</p>
     */
    inline GetTargetGroupResult& WithServiceArns(const Aws::Vector<Aws::String>& value) { SetServiceArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the service.</p>
     */
    inline GetTargetGroupResult& WithServiceArns(Aws::Vector<Aws::String>&& value) { SetServiceArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the service.</p>
     */
    inline GetTargetGroupResult& AddServiceArns(const Aws::String& value) { m_serviceArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the service.</p>
     */
    inline GetTargetGroupResult& AddServiceArns(Aws::String&& value) { m_serviceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the service.</p>
     */
    inline GetTargetGroupResult& AddServiceArns(const char* value) { m_serviceArns.push_back(value); return *this; }


    /**
     * <p>The status.</p>
     */
    inline const TargetGroupStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(const TargetGroupStatus& value) { m_status = value; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(TargetGroupStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status.</p>
     */
    inline GetTargetGroupResult& WithStatus(const TargetGroupStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status.</p>
     */
    inline GetTargetGroupResult& WithStatus(TargetGroupStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The target group type.</p>
     */
    inline const TargetGroupType& GetType() const{ return m_type; }

    /**
     * <p>The target group type.</p>
     */
    inline void SetType(const TargetGroupType& value) { m_type = value; }

    /**
     * <p>The target group type.</p>
     */
    inline void SetType(TargetGroupType&& value) { m_type = std::move(value); }

    /**
     * <p>The target group type.</p>
     */
    inline GetTargetGroupResult& WithType(const TargetGroupType& value) { SetType(value); return *this;}

    /**
     * <p>The target group type.</p>
     */
    inline GetTargetGroupResult& WithType(TargetGroupType&& value) { SetType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTargetGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTargetGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTargetGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    TargetGroupConfig m_config;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_failureCode;

    Aws::String m_failureMessage;

    Aws::String m_id;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_name;

    Aws::Vector<Aws::String> m_serviceArns;

    TargetGroupStatus m_status;

    TargetGroupType m_type;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
