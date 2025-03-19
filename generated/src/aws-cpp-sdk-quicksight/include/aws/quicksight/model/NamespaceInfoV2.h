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
    AWS_QUICKSIGHT_API NamespaceInfoV2() = default;
    AWS_QUICKSIGHT_API NamespaceInfoV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NamespaceInfoV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the error.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    NamespaceInfoV2& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    NamespaceInfoV2& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetCapacityRegion() const { return m_capacityRegion; }
    inline bool CapacityRegionHasBeenSet() const { return m_capacityRegionHasBeenSet; }
    template<typename CapacityRegionT = Aws::String>
    void SetCapacityRegion(CapacityRegionT&& value) { m_capacityRegionHasBeenSet = true; m_capacityRegion = std::forward<CapacityRegionT>(value); }
    template<typename CapacityRegionT = Aws::String>
    NamespaceInfoV2& WithCapacityRegion(CapacityRegionT&& value) { SetCapacityRegion(std::forward<CapacityRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation status of a namespace that is not yet completely created.</p>
     */
    inline NamespaceStatus GetCreationStatus() const { return m_creationStatus; }
    inline bool CreationStatusHasBeenSet() const { return m_creationStatusHasBeenSet; }
    inline void SetCreationStatus(NamespaceStatus value) { m_creationStatusHasBeenSet = true; m_creationStatus = value; }
    inline NamespaceInfoV2& WithCreationStatus(NamespaceStatus value) { SetCreationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity store used for the namespace.</p>
     */
    inline IdentityStore GetIdentityStore() const { return m_identityStore; }
    inline bool IdentityStoreHasBeenSet() const { return m_identityStoreHasBeenSet; }
    inline void SetIdentityStore(IdentityStore value) { m_identityStoreHasBeenSet = true; m_identityStore = value; }
    inline NamespaceInfoV2& WithIdentityStore(IdentityStore value) { SetIdentityStore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error that occurred when the namespace was created.</p>
     */
    inline const NamespaceError& GetNamespaceError() const { return m_namespaceError; }
    inline bool NamespaceErrorHasBeenSet() const { return m_namespaceErrorHasBeenSet; }
    template<typename NamespaceErrorT = NamespaceError>
    void SetNamespaceError(NamespaceErrorT&& value) { m_namespaceErrorHasBeenSet = true; m_namespaceError = std::forward<NamespaceErrorT>(value); }
    template<typename NamespaceErrorT = NamespaceError>
    NamespaceInfoV2& WithNamespaceError(NamespaceErrorT&& value) { SetNamespaceError(std::forward<NamespaceErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM Identity Center application.</p>
     */
    inline const Aws::String& GetIamIdentityCenterApplicationArn() const { return m_iamIdentityCenterApplicationArn; }
    inline bool IamIdentityCenterApplicationArnHasBeenSet() const { return m_iamIdentityCenterApplicationArnHasBeenSet; }
    template<typename IamIdentityCenterApplicationArnT = Aws::String>
    void SetIamIdentityCenterApplicationArn(IamIdentityCenterApplicationArnT&& value) { m_iamIdentityCenterApplicationArnHasBeenSet = true; m_iamIdentityCenterApplicationArn = std::forward<IamIdentityCenterApplicationArnT>(value); }
    template<typename IamIdentityCenterApplicationArnT = Aws::String>
    NamespaceInfoV2& WithIamIdentityCenterApplicationArn(IamIdentityCenterApplicationArnT&& value) { SetIamIdentityCenterApplicationArn(std::forward<IamIdentityCenterApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM Identity Center instance.</p>
     */
    inline const Aws::String& GetIamIdentityCenterInstanceArn() const { return m_iamIdentityCenterInstanceArn; }
    inline bool IamIdentityCenterInstanceArnHasBeenSet() const { return m_iamIdentityCenterInstanceArnHasBeenSet; }
    template<typename IamIdentityCenterInstanceArnT = Aws::String>
    void SetIamIdentityCenterInstanceArn(IamIdentityCenterInstanceArnT&& value) { m_iamIdentityCenterInstanceArnHasBeenSet = true; m_iamIdentityCenterInstanceArn = std::forward<IamIdentityCenterInstanceArnT>(value); }
    template<typename IamIdentityCenterInstanceArnT = Aws::String>
    NamespaceInfoV2& WithIamIdentityCenterInstanceArn(IamIdentityCenterInstanceArnT&& value) { SetIamIdentityCenterInstanceArn(std::forward<IamIdentityCenterInstanceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_capacityRegion;
    bool m_capacityRegionHasBeenSet = false;

    NamespaceStatus m_creationStatus{NamespaceStatus::NOT_SET};
    bool m_creationStatusHasBeenSet = false;

    IdentityStore m_identityStore{IdentityStore::NOT_SET};
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
