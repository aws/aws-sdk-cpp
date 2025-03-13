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
    AWS_VPCLATTICE_API GetTargetGroupResult() = default;
    AWS_VPCLATTICE_API GetTargetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API GetTargetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetTargetGroupResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target group configuration.</p>
     */
    inline const TargetGroupConfig& GetConfig() const { return m_config; }
    template<typename ConfigT = TargetGroupConfig>
    void SetConfig(ConfigT&& value) { m_configHasBeenSet = true; m_config = std::forward<ConfigT>(value); }
    template<typename ConfigT = TargetGroupConfig>
    GetTargetGroupResult& WithConfig(ConfigT&& value) { SetConfig(std::forward<ConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the target group was created, in ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetTargetGroupResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure code.</p>
     */
    inline const Aws::String& GetFailureCode() const { return m_failureCode; }
    template<typename FailureCodeT = Aws::String>
    void SetFailureCode(FailureCodeT&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::forward<FailureCodeT>(value); }
    template<typename FailureCodeT = Aws::String>
    GetTargetGroupResult& WithFailureCode(FailureCodeT&& value) { SetFailureCode(std::forward<FailureCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure message.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    GetTargetGroupResult& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the target group.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetTargetGroupResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the target group was last updated, in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetTargetGroupResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the target group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetTargetGroupResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceArns() const { return m_serviceArns; }
    template<typename ServiceArnsT = Aws::Vector<Aws::String>>
    void SetServiceArns(ServiceArnsT&& value) { m_serviceArnsHasBeenSet = true; m_serviceArns = std::forward<ServiceArnsT>(value); }
    template<typename ServiceArnsT = Aws::Vector<Aws::String>>
    GetTargetGroupResult& WithServiceArns(ServiceArnsT&& value) { SetServiceArns(std::forward<ServiceArnsT>(value)); return *this;}
    template<typename ServiceArnsT = Aws::String>
    GetTargetGroupResult& AddServiceArns(ServiceArnsT&& value) { m_serviceArnsHasBeenSet = true; m_serviceArns.emplace_back(std::forward<ServiceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline TargetGroupStatus GetStatus() const { return m_status; }
    inline void SetStatus(TargetGroupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetTargetGroupResult& WithStatus(TargetGroupStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target group type.</p>
     */
    inline TargetGroupType GetType() const { return m_type; }
    inline void SetType(TargetGroupType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetTargetGroupResult& WithType(TargetGroupType value) { SetType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTargetGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    TargetGroupConfig m_config;
    bool m_configHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_serviceArns;
    bool m_serviceArnsHasBeenSet = false;

    TargetGroupStatus m_status{TargetGroupStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    TargetGroupType m_type{TargetGroupType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
