/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/OperationType.h>
#include <aws/servicediscovery/model/OperationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicediscovery/model/OperationTargetType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>A complex type that contains information about a specified
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/Operation">AWS
   * API Reference</a></p>
   */
  class Operation
  {
  public:
    AWS_SERVICEDISCOVERY_API Operation() = default;
    AWS_SERVICEDISCOVERY_API Operation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Operation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the operation that you want to get information about.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Operation& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the namespace associated
     * with the operation.</p>
     */
    inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    template<typename OwnerAccountT = Aws::String>
    void SetOwnerAccount(OwnerAccountT&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::forward<OwnerAccountT>(value); }
    template<typename OwnerAccountT = Aws::String>
    Operation& WithOwnerAccount(OwnerAccountT&& value) { SetOwnerAccount(std::forward<OwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the operation that's associated with the specified ID.</p>
     */
    inline OperationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(OperationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Operation& WithType(OperationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the operation. Values include the following:</p> <dl>
     * <dt>SUBMITTED</dt> <dd> <p>This is the initial state that occurs immediately
     * after you submit a request.</p> </dd> <dt>PENDING</dt> <dd> <p>Cloud Map is
     * performing the operation.</p> </dd> <dt>SUCCESS</dt> <dd> <p>The operation
     * succeeded.</p> </dd> <dt>FAIL</dt> <dd> <p>The operation failed. For the failure
     * reason, see <code>ErrorMessage</code>.</p> </dd> </dl>
     */
    inline OperationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(OperationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Operation& WithStatus(OperationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the value of <code>Status</code> is <code>FAIL</code>, the reason that the
     * operation failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    Operation& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code associated with <code>ErrorMessage</code>. Values for
     * <code>ErrorCode</code> include the following:</p> <ul> <li> <p>
     * <code>ACCESS_DENIED</code> </p> </li> <li> <p>
     * <code>CANNOT_CREATE_HOSTED_ZONE</code> </p> </li> <li> <p>
     * <code>EXPIRED_TOKEN</code> </p> </li> <li> <p>
     * <code>HOSTED_ZONE_NOT_FOUND</code> </p> </li> <li> <p>
     * <code>INTERNAL_FAILURE</code> </p> </li> <li> <p>
     * <code>INVALID_CHANGE_BATCH</code> </p> </li> <li> <p>
     * <code>THROTTLED_REQUEST</code> </p> </li> </ul>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    Operation& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the request was submitted, in Unix date/time format
     * and Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    Operation& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the value of <code>Status</code> changed to the
     * current value, in Unix date/time format and Coordinated Universal Time (UTC).
     * The value of <code>UpdateDate</code> is accurate to milliseconds. For example,
     * the value <code>1516925490.087</code> represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const { return m_updateDate; }
    inline bool UpdateDateHasBeenSet() const { return m_updateDateHasBeenSet; }
    template<typename UpdateDateT = Aws::Utils::DateTime>
    void SetUpdateDate(UpdateDateT&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::forward<UpdateDateT>(value); }
    template<typename UpdateDateT = Aws::Utils::DateTime>
    Operation& WithUpdateDate(UpdateDateT&& value) { SetUpdateDate(std::forward<UpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the target entity that's associated with the operation:</p> <dl>
     * <dt>NAMESPACE</dt> <dd> <p>The namespace ID is returned in the
     * <code>ResourceId</code> property.</p> </dd> <dt>SERVICE</dt> <dd> <p>The service
     * ID is returned in the <code>ResourceId</code> property.</p> </dd>
     * <dt>INSTANCE</dt> <dd> <p>The instance ID is returned in the
     * <code>ResourceId</code> property.</p> </dd> </dl>
     */
    inline const Aws::Map<OperationTargetType, Aws::String>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Map<OperationTargetType, Aws::String>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Map<OperationTargetType, Aws::String>>
    Operation& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    inline Operation& AddTargets(OperationTargetType key, Aws::String value) {
      m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    OperationType m_type{OperationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    OperationStatus m_status{OperationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    Aws::Utils::DateTime m_updateDate{};
    bool m_updateDateHasBeenSet = false;

    Aws::Map<OperationTargetType, Aws::String> m_targets;
    bool m_targetsHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
