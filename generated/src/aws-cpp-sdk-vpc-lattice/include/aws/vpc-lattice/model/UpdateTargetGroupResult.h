/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/TargetGroupConfig.h>
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
  class UpdateTargetGroupResult
  {
  public:
    AWS_VPCLATTICE_API UpdateTargetGroupResult();
    AWS_VPCLATTICE_API UpdateTargetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API UpdateTargetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateTargetGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline UpdateTargetGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline UpdateTargetGroupResult& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline UpdateTargetGroupResult& WithConfig(const TargetGroupConfig& value) { SetConfig(value); return *this;}

    /**
     * <p>The target group configuration.</p>
     */
    inline UpdateTargetGroupResult& WithConfig(TargetGroupConfig&& value) { SetConfig(std::move(value)); return *this;}


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
    inline UpdateTargetGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the target group.</p>
     */
    inline UpdateTargetGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the target group.</p>
     */
    inline UpdateTargetGroupResult& WithId(const char* value) { SetId(value); return *this;}


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
    inline UpdateTargetGroupResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the target group.</p>
     */
    inline UpdateTargetGroupResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the target group.</p>
     */
    inline UpdateTargetGroupResult& WithName(const char* value) { SetName(value); return *this;}


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
    inline UpdateTargetGroupResult& WithStatus(const TargetGroupStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status.</p>
     */
    inline UpdateTargetGroupResult& WithStatus(TargetGroupStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline UpdateTargetGroupResult& WithType(const TargetGroupType& value) { SetType(value); return *this;}

    /**
     * <p>The target group type.</p>
     */
    inline UpdateTargetGroupResult& WithType(TargetGroupType&& value) { SetType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateTargetGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateTargetGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateTargetGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    TargetGroupConfig m_config;

    Aws::String m_id;

    Aws::String m_name;

    TargetGroupStatus m_status;

    TargetGroupType m_type;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
