/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/DataAccessorAuthenticationDetail.h>
#include <aws/core/utils/DateTime.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Provides summary information about a data accessor.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DataAccessor">AWS
   * API Reference</a></p>
   */
  class DataAccessor
  {
  public:
    AWS_QBUSINESS_API DataAccessor() = default;
    AWS_QBUSINESS_API DataAccessor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DataAccessor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The friendly name of the data accessor.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    DataAccessor& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the data accessor.</p>
     */
    inline const Aws::String& GetDataAccessorId() const { return m_dataAccessorId; }
    inline bool DataAccessorIdHasBeenSet() const { return m_dataAccessorIdHasBeenSet; }
    template<typename DataAccessorIdT = Aws::String>
    void SetDataAccessorId(DataAccessorIdT&& value) { m_dataAccessorIdHasBeenSet = true; m_dataAccessorId = std::forward<DataAccessorIdT>(value); }
    template<typename DataAccessorIdT = Aws::String>
    DataAccessor& WithDataAccessorId(DataAccessorIdT&& value) { SetDataAccessorId(std::forward<DataAccessorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data accessor.</p>
     */
    inline const Aws::String& GetDataAccessorArn() const { return m_dataAccessorArn; }
    inline bool DataAccessorArnHasBeenSet() const { return m_dataAccessorArnHasBeenSet; }
    template<typename DataAccessorArnT = Aws::String>
    void SetDataAccessorArn(DataAccessorArnT&& value) { m_dataAccessorArnHasBeenSet = true; m_dataAccessorArn = std::forward<DataAccessorArnT>(value); }
    template<typename DataAccessorArnT = Aws::String>
    DataAccessor& WithDataAccessorArn(DataAccessorArnT&& value) { SetDataAccessorArn(std::forward<DataAccessorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the associated IAM Identity Center
     * application.</p>
     */
    inline const Aws::String& GetIdcApplicationArn() const { return m_idcApplicationArn; }
    inline bool IdcApplicationArnHasBeenSet() const { return m_idcApplicationArnHasBeenSet; }
    template<typename IdcApplicationArnT = Aws::String>
    void SetIdcApplicationArn(IdcApplicationArnT&& value) { m_idcApplicationArnHasBeenSet = true; m_idcApplicationArn = std::forward<IdcApplicationArnT>(value); }
    template<typename IdcApplicationArnT = Aws::String>
    DataAccessor& WithIdcApplicationArn(IdcApplicationArnT&& value) { SetIdcApplicationArn(std::forward<IdcApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the ISV associated with
     * this data accessor.</p>
     */
    inline const Aws::String& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = Aws::String>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = Aws::String>
    DataAccessor& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication configuration details for the data accessor. This
     * specifies how the ISV authenticates when accessing data through this data
     * accessor.</p>
     */
    inline const DataAccessorAuthenticationDetail& GetAuthenticationDetail() const { return m_authenticationDetail; }
    inline bool AuthenticationDetailHasBeenSet() const { return m_authenticationDetailHasBeenSet; }
    template<typename AuthenticationDetailT = DataAccessorAuthenticationDetail>
    void SetAuthenticationDetail(AuthenticationDetailT&& value) { m_authenticationDetailHasBeenSet = true; m_authenticationDetail = std::forward<AuthenticationDetailT>(value); }
    template<typename AuthenticationDetailT = DataAccessorAuthenticationDetail>
    DataAccessor& WithAuthenticationDetail(AuthenticationDetailT&& value) { SetAuthenticationDetail(std::forward<AuthenticationDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the data accessor was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DataAccessor& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the data accessor was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    DataAccessor& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_dataAccessorId;
    bool m_dataAccessorIdHasBeenSet = false;

    Aws::String m_dataAccessorArn;
    bool m_dataAccessorArnHasBeenSet = false;

    Aws::String m_idcApplicationArn;
    bool m_idcApplicationArnHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    DataAccessorAuthenticationDetail m_authenticationDetail;
    bool m_authenticationDetailHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
