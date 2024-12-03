/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_QBUSINESS_API DataAccessor();
    AWS_QBUSINESS_API DataAccessor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DataAccessor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The friendly name of the data accessor.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline DataAccessor& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline DataAccessor& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline DataAccessor& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the data accessor.</p>
     */
    inline const Aws::String& GetDataAccessorId() const{ return m_dataAccessorId; }
    inline bool DataAccessorIdHasBeenSet() const { return m_dataAccessorIdHasBeenSet; }
    inline void SetDataAccessorId(const Aws::String& value) { m_dataAccessorIdHasBeenSet = true; m_dataAccessorId = value; }
    inline void SetDataAccessorId(Aws::String&& value) { m_dataAccessorIdHasBeenSet = true; m_dataAccessorId = std::move(value); }
    inline void SetDataAccessorId(const char* value) { m_dataAccessorIdHasBeenSet = true; m_dataAccessorId.assign(value); }
    inline DataAccessor& WithDataAccessorId(const Aws::String& value) { SetDataAccessorId(value); return *this;}
    inline DataAccessor& WithDataAccessorId(Aws::String&& value) { SetDataAccessorId(std::move(value)); return *this;}
    inline DataAccessor& WithDataAccessorId(const char* value) { SetDataAccessorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data accessor.</p>
     */
    inline const Aws::String& GetDataAccessorArn() const{ return m_dataAccessorArn; }
    inline bool DataAccessorArnHasBeenSet() const { return m_dataAccessorArnHasBeenSet; }
    inline void SetDataAccessorArn(const Aws::String& value) { m_dataAccessorArnHasBeenSet = true; m_dataAccessorArn = value; }
    inline void SetDataAccessorArn(Aws::String&& value) { m_dataAccessorArnHasBeenSet = true; m_dataAccessorArn = std::move(value); }
    inline void SetDataAccessorArn(const char* value) { m_dataAccessorArnHasBeenSet = true; m_dataAccessorArn.assign(value); }
    inline DataAccessor& WithDataAccessorArn(const Aws::String& value) { SetDataAccessorArn(value); return *this;}
    inline DataAccessor& WithDataAccessorArn(Aws::String&& value) { SetDataAccessorArn(std::move(value)); return *this;}
    inline DataAccessor& WithDataAccessorArn(const char* value) { SetDataAccessorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the associated AWS IAM Identity Center
     * application.</p>
     */
    inline const Aws::String& GetIdcApplicationArn() const{ return m_idcApplicationArn; }
    inline bool IdcApplicationArnHasBeenSet() const { return m_idcApplicationArnHasBeenSet; }
    inline void SetIdcApplicationArn(const Aws::String& value) { m_idcApplicationArnHasBeenSet = true; m_idcApplicationArn = value; }
    inline void SetIdcApplicationArn(Aws::String&& value) { m_idcApplicationArnHasBeenSet = true; m_idcApplicationArn = std::move(value); }
    inline void SetIdcApplicationArn(const char* value) { m_idcApplicationArnHasBeenSet = true; m_idcApplicationArn.assign(value); }
    inline DataAccessor& WithIdcApplicationArn(const Aws::String& value) { SetIdcApplicationArn(value); return *this;}
    inline DataAccessor& WithIdcApplicationArn(Aws::String&& value) { SetIdcApplicationArn(std::move(value)); return *this;}
    inline DataAccessor& WithIdcApplicationArn(const char* value) { SetIdcApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the ISV associated with
     * this data accessor.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }
    inline DataAccessor& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}
    inline DataAccessor& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}
    inline DataAccessor& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the data accessor was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline DataAccessor& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DataAccessor& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the data accessor was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline DataAccessor& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline DataAccessor& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
