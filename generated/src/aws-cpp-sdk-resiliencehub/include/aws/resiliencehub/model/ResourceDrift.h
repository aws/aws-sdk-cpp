﻿/**
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
    AWS_RESILIENCEHUB_API ResourceDrift();
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
    inline const Aws::String& GetAppArn() const{ return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }
    inline ResourceDrift& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}
    inline ResourceDrift& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}
    inline ResourceDrift& WithAppArn(const char* value) { SetAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the application whose resources have drifted.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }
    inline bool AppVersionHasBeenSet() const { return m_appVersionHasBeenSet; }
    inline void SetAppVersion(const Aws::String& value) { m_appVersionHasBeenSet = true; m_appVersion = value; }
    inline void SetAppVersion(Aws::String&& value) { m_appVersionHasBeenSet = true; m_appVersion = std::move(value); }
    inline void SetAppVersion(const char* value) { m_appVersionHasBeenSet = true; m_appVersion.assign(value); }
    inline ResourceDrift& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}
    inline ResourceDrift& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}
    inline ResourceDrift& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the resource was added or removed.</p>
     */
    inline const DifferenceType& GetDiffType() const{ return m_diffType; }
    inline bool DiffTypeHasBeenSet() const { return m_diffTypeHasBeenSet; }
    inline void SetDiffType(const DifferenceType& value) { m_diffTypeHasBeenSet = true; m_diffType = value; }
    inline void SetDiffType(DifferenceType&& value) { m_diffTypeHasBeenSet = true; m_diffType = std::move(value); }
    inline ResourceDrift& WithDiffType(const DifferenceType& value) { SetDiffType(value); return *this;}
    inline ResourceDrift& WithDiffType(DifferenceType&& value) { SetDiffType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference identifier of the resource drift.</p>
     */
    inline const Aws::String& GetReferenceId() const{ return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    inline void SetReferenceId(const Aws::String& value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }
    inline void SetReferenceId(Aws::String&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::move(value); }
    inline void SetReferenceId(const char* value) { m_referenceIdHasBeenSet = true; m_referenceId.assign(value); }
    inline ResourceDrift& WithReferenceId(const Aws::String& value) { SetReferenceId(value); return *this;}
    inline ResourceDrift& WithReferenceId(Aws::String&& value) { SetReferenceId(std::move(value)); return *this;}
    inline ResourceDrift& WithReferenceId(const char* value) { SetReferenceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the drifted resource.</p>
     */
    inline const ResourceIdentifier& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const ResourceIdentifier& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(ResourceIdentifier&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline ResourceDrift& WithResourceIdentifier(const ResourceIdentifier& value) { SetResourceIdentifier(value); return *this;}
    inline ResourceDrift& WithResourceIdentifier(ResourceIdentifier&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_appVersion;
    bool m_appVersionHasBeenSet = false;

    DifferenceType m_diffType;
    bool m_diffTypeHasBeenSet = false;

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet = false;

    ResourceIdentifier m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
