/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/DifferenceType.h>
#include <aws/resiliencehub/model/ResourceIdentifier.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Indicates the resources that have drifted in the current application
   * version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ResourceDrift">AWS
   * API Reference</a></p>
   */
  class ResourceDrift
  {
  public:
    AWS_RESILIENCEHUB_API ResourceDrift() = default;
    AWS_RESILIENCEHUB_API ResourceDrift(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API ResourceDrift& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the application whose resources have drifted.
     * The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAppArn() const { return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    template<typename AppArnT = Aws::String>
    void SetAppArn(AppArnT&& value) { m_appArnHasBeenSet = true; m_appArn = std::forward<AppArnT>(value); }
    template<typename AppArnT = Aws::String>
    ResourceDrift& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the application whose resources have drifted.</p>
     */
    inline const Aws::String& GetAppVersion() const { return m_appVersion; }
    inline bool AppVersionHasBeenSet() const { return m_appVersionHasBeenSet; }
    template<typename AppVersionT = Aws::String>
    void SetAppVersion(AppVersionT&& value) { m_appVersionHasBeenSet = true; m_appVersion = std::forward<AppVersionT>(value); }
    template<typename AppVersionT = Aws::String>
    ResourceDrift& WithAppVersion(AppVersionT&& value) { SetAppVersion(std::forward<AppVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the resource was added or removed.</p>
     */
    inline DifferenceType GetDiffType() const { return m_diffType; }
    inline bool DiffTypeHasBeenSet() const { return m_diffTypeHasBeenSet; }
    inline void SetDiffType(DifferenceType value) { m_diffTypeHasBeenSet = true; m_diffType = value; }
    inline ResourceDrift& WithDiffType(DifferenceType value) { SetDiffType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference identifier of the resource drift.</p>
     */
    inline const Aws::String& GetReferenceId() const { return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    template<typename ReferenceIdT = Aws::String>
    void SetReferenceId(ReferenceIdT&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::forward<ReferenceIdT>(value); }
    template<typename ReferenceIdT = Aws::String>
    ResourceDrift& WithReferenceId(ReferenceIdT&& value) { SetReferenceId(std::forward<ReferenceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the drifted resource.</p>
     */
    inline const ResourceIdentifier& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = ResourceIdentifier>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = ResourceIdentifier>
    ResourceDrift& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_appVersion;
    bool m_appVersionHasBeenSet = false;

    DifferenceType m_diffType{DifferenceType::NOT_SET};
    bool m_diffTypeHasBeenSet = false;

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet = false;

    ResourceIdentifier m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
