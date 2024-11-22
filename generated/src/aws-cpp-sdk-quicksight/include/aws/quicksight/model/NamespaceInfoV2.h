/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/NamespaceStatus.h>
#include <aws/quicksight/model/IdentityStore.h>
#include <aws/quicksight/model/NamespaceError.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The error type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NamespaceInfoV2">AWS
   * API Reference</a></p>
   */
  class NamespaceInfoV2
  {
  public:
    AWS_QUICKSIGHT_API NamespaceInfoV2();
    AWS_QUICKSIGHT_API NamespaceInfoV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NamespaceInfoV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the error.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline NamespaceInfoV2& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline NamespaceInfoV2& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline NamespaceInfoV2& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline NamespaceInfoV2& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline NamespaceInfoV2& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline NamespaceInfoV2& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetCapacityRegion() const{ return m_capacityRegion; }
    inline bool CapacityRegionHasBeenSet() const { return m_capacityRegionHasBeenSet; }
    inline void SetCapacityRegion(const Aws::String& value) { m_capacityRegionHasBeenSet = true; m_capacityRegion = value; }
    inline void SetCapacityRegion(Aws::String&& value) { m_capacityRegionHasBeenSet = true; m_capacityRegion = std::move(value); }
    inline void SetCapacityRegion(const char* value) { m_capacityRegionHasBeenSet = true; m_capacityRegion.assign(value); }
    inline NamespaceInfoV2& WithCapacityRegion(const Aws::String& value) { SetCapacityRegion(value); return *this;}
    inline NamespaceInfoV2& WithCapacityRegion(Aws::String&& value) { SetCapacityRegion(std::move(value)); return *this;}
    inline NamespaceInfoV2& WithCapacityRegion(const char* value) { SetCapacityRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation status of a namespace that is not yet completely created.</p>
     */
    inline const NamespaceStatus& GetCreationStatus() const{ return m_creationStatus; }
    inline bool CreationStatusHasBeenSet() const { return m_creationStatusHasBeenSet; }
    inline void SetCreationStatus(const NamespaceStatus& value) { m_creationStatusHasBeenSet = true; m_creationStatus = value; }
    inline void SetCreationStatus(NamespaceStatus&& value) { m_creationStatusHasBeenSet = true; m_creationStatus = std::move(value); }
    inline NamespaceInfoV2& WithCreationStatus(const NamespaceStatus& value) { SetCreationStatus(value); return *this;}
    inline NamespaceInfoV2& WithCreationStatus(NamespaceStatus&& value) { SetCreationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity store used for the namespace.</p>
     */
    inline const IdentityStore& GetIdentityStore() const{ return m_identityStore; }
    inline bool IdentityStoreHasBeenSet() const { return m_identityStoreHasBeenSet; }
    inline void SetIdentityStore(const IdentityStore& value) { m_identityStoreHasBeenSet = true; m_identityStore = value; }
    inline void SetIdentityStore(IdentityStore&& value) { m_identityStoreHasBeenSet = true; m_identityStore = std::move(value); }
    inline NamespaceInfoV2& WithIdentityStore(const IdentityStore& value) { SetIdentityStore(value); return *this;}
    inline NamespaceInfoV2& WithIdentityStore(IdentityStore&& value) { SetIdentityStore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error that occurred when the namespace was created.</p>
     */
    inline const NamespaceError& GetNamespaceError() const{ return m_namespaceError; }
    inline bool NamespaceErrorHasBeenSet() const { return m_namespaceErrorHasBeenSet; }
    inline void SetNamespaceError(const NamespaceError& value) { m_namespaceErrorHasBeenSet = true; m_namespaceError = value; }
    inline void SetNamespaceError(NamespaceError&& value) { m_namespaceErrorHasBeenSet = true; m_namespaceError = std::move(value); }
    inline NamespaceInfoV2& WithNamespaceError(const NamespaceError& value) { SetNamespaceError(value); return *this;}
    inline NamespaceInfoV2& WithNamespaceError(NamespaceError&& value) { SetNamespaceError(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM Identity Center application.</p>
     */
    inline const Aws::String& GetIamIdentityCenterApplicationArn() const{ return m_iamIdentityCenterApplicationArn; }
    inline bool IamIdentityCenterApplicationArnHasBeenSet() const { return m_iamIdentityCenterApplicationArnHasBeenSet; }
    inline void SetIamIdentityCenterApplicationArn(const Aws::String& value) { m_iamIdentityCenterApplicationArnHasBeenSet = true; m_iamIdentityCenterApplicationArn = value; }
    inline void SetIamIdentityCenterApplicationArn(Aws::String&& value) { m_iamIdentityCenterApplicationArnHasBeenSet = true; m_iamIdentityCenterApplicationArn = std::move(value); }
    inline void SetIamIdentityCenterApplicationArn(const char* value) { m_iamIdentityCenterApplicationArnHasBeenSet = true; m_iamIdentityCenterApplicationArn.assign(value); }
    inline NamespaceInfoV2& WithIamIdentityCenterApplicationArn(const Aws::String& value) { SetIamIdentityCenterApplicationArn(value); return *this;}
    inline NamespaceInfoV2& WithIamIdentityCenterApplicationArn(Aws::String&& value) { SetIamIdentityCenterApplicationArn(std::move(value)); return *this;}
    inline NamespaceInfoV2& WithIamIdentityCenterApplicationArn(const char* value) { SetIamIdentityCenterApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM Identity Center instance.</p>
     */
    inline const Aws::String& GetIamIdentityCenterInstanceArn() const{ return m_iamIdentityCenterInstanceArn; }
    inline bool IamIdentityCenterInstanceArnHasBeenSet() const { return m_iamIdentityCenterInstanceArnHasBeenSet; }
    inline void SetIamIdentityCenterInstanceArn(const Aws::String& value) { m_iamIdentityCenterInstanceArnHasBeenSet = true; m_iamIdentityCenterInstanceArn = value; }
    inline void SetIamIdentityCenterInstanceArn(Aws::String&& value) { m_iamIdentityCenterInstanceArnHasBeenSet = true; m_iamIdentityCenterInstanceArn = std::move(value); }
    inline void SetIamIdentityCenterInstanceArn(const char* value) { m_iamIdentityCenterInstanceArnHasBeenSet = true; m_iamIdentityCenterInstanceArn.assign(value); }
    inline NamespaceInfoV2& WithIamIdentityCenterInstanceArn(const Aws::String& value) { SetIamIdentityCenterInstanceArn(value); return *this;}
    inline NamespaceInfoV2& WithIamIdentityCenterInstanceArn(Aws::String&& value) { SetIamIdentityCenterInstanceArn(std::move(value)); return *this;}
    inline NamespaceInfoV2& WithIamIdentityCenterInstanceArn(const char* value) { SetIamIdentityCenterInstanceArn(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_capacityRegion;
    bool m_capacityRegionHasBeenSet = false;

    NamespaceStatus m_creationStatus;
    bool m_creationStatusHasBeenSet = false;

    IdentityStore m_identityStore;
    bool m_identityStoreHasBeenSet = false;

    NamespaceError m_namespaceError;
    bool m_namespaceErrorHasBeenSet = false;

    Aws::String m_iamIdentityCenterApplicationArn;
    bool m_iamIdentityCenterApplicationArnHasBeenSet = false;

    Aws::String m_iamIdentityCenterInstanceArn;
    bool m_iamIdentityCenterInstanceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
