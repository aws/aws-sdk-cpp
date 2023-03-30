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
  class CreateTargetGroupResult
  {
  public:
    AWS_VPCLATTICE_API CreateTargetGroupResult();
    AWS_VPCLATTICE_API CreateTargetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API CreateTargetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateTargetGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline CreateTargetGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline CreateTargetGroupResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The target group configuration. If <code>type</code> is set to
     * <code>LAMBDA</code>, this parameter doesn't apply.</p>
     */
    inline const TargetGroupConfig& GetConfig() const{ return m_config; }

    /**
     * <p>The target group configuration. If <code>type</code> is set to
     * <code>LAMBDA</code>, this parameter doesn't apply.</p>
     */
    inline void SetConfig(const TargetGroupConfig& value) { m_config = value; }

    /**
     * <p>The target group configuration. If <code>type</code> is set to
     * <code>LAMBDA</code>, this parameter doesn't apply.</p>
     */
    inline void SetConfig(TargetGroupConfig&& value) { m_config = std::move(value); }

    /**
     * <p>The target group configuration. If <code>type</code> is set to
     * <code>LAMBDA</code>, this parameter doesn't apply.</p>
     */
    inline CreateTargetGroupResult& WithConfig(const TargetGroupConfig& value) { SetConfig(value); return *this;}

    /**
     * <p>The target group configuration. If <code>type</code> is set to
     * <code>LAMBDA</code>, this parameter doesn't apply.</p>
     */
    inline CreateTargetGroupResult& WithConfig(TargetGroupConfig&& value) { SetConfig(std::move(value)); return *this;}


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
    inline CreateTargetGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the target group.</p>
     */
    inline CreateTargetGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the target group.</p>
     */
    inline CreateTargetGroupResult& WithId(const char* value) { SetId(value); return *this;}


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
    inline CreateTargetGroupResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the target group.</p>
     */
    inline CreateTargetGroupResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the target group.</p>
     */
    inline CreateTargetGroupResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The operation's status. You can retry the operation if the status is
     * <code>CREATE_FAILED</code>. However, if you retry it while the status is
     * <code>CREATE_IN_PROGRESS</code>, there is no change in the status. </p>
     */
    inline const TargetGroupStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The operation's status. You can retry the operation if the status is
     * <code>CREATE_FAILED</code>. However, if you retry it while the status is
     * <code>CREATE_IN_PROGRESS</code>, there is no change in the status. </p>
     */
    inline void SetStatus(const TargetGroupStatus& value) { m_status = value; }

    /**
     * <p>The operation's status. You can retry the operation if the status is
     * <code>CREATE_FAILED</code>. However, if you retry it while the status is
     * <code>CREATE_IN_PROGRESS</code>, there is no change in the status. </p>
     */
    inline void SetStatus(TargetGroupStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The operation's status. You can retry the operation if the status is
     * <code>CREATE_FAILED</code>. However, if you retry it while the status is
     * <code>CREATE_IN_PROGRESS</code>, there is no change in the status. </p>
     */
    inline CreateTargetGroupResult& WithStatus(const TargetGroupStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The operation's status. You can retry the operation if the status is
     * <code>CREATE_FAILED</code>. However, if you retry it while the status is
     * <code>CREATE_IN_PROGRESS</code>, there is no change in the status. </p>
     */
    inline CreateTargetGroupResult& WithStatus(TargetGroupStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The type of target group.</p>
     */
    inline const TargetGroupType& GetType() const{ return m_type; }

    /**
     * <p>The type of target group.</p>
     */
    inline void SetType(const TargetGroupType& value) { m_type = value; }

    /**
     * <p>The type of target group.</p>
     */
    inline void SetType(TargetGroupType&& value) { m_type = std::move(value); }

    /**
     * <p>The type of target group.</p>
     */
    inline CreateTargetGroupResult& WithType(const TargetGroupType& value) { SetType(value); return *this;}

    /**
     * <p>The type of target group.</p>
     */
    inline CreateTargetGroupResult& WithType(TargetGroupType&& value) { SetType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateTargetGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateTargetGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateTargetGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
