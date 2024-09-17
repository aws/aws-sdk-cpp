/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/workspaces-thin-client/model/SoftwareSetValidationStatus.h>
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
namespace WorkSpacesThinClient
{
namespace Model
{

  /**
   * <p>Describes a software set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/SoftwareSetSummary">AWS
   * API Reference</a></p>
   */
  class SoftwareSetSummary
  {
  public:
    AWS_WORKSPACESTHINCLIENT_API SoftwareSetSummary();
    AWS_WORKSPACESTHINCLIENT_API SoftwareSetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API SoftwareSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the software set.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline SoftwareSetSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline SoftwareSetSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline SoftwareSetSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the software set.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline SoftwareSetSummary& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline SoftwareSetSummary& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline SoftwareSetSummary& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the software set was released.</p>
     */
    inline const Aws::Utils::DateTime& GetReleasedAt() const{ return m_releasedAt; }
    inline bool ReleasedAtHasBeenSet() const { return m_releasedAtHasBeenSet; }
    inline void SetReleasedAt(const Aws::Utils::DateTime& value) { m_releasedAtHasBeenSet = true; m_releasedAt = value; }
    inline void SetReleasedAt(Aws::Utils::DateTime&& value) { m_releasedAtHasBeenSet = true; m_releasedAt = std::move(value); }
    inline SoftwareSetSummary& WithReleasedAt(const Aws::Utils::DateTime& value) { SetReleasedAt(value); return *this;}
    inline SoftwareSetSummary& WithReleasedAt(Aws::Utils::DateTime&& value) { SetReleasedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the end of support for the software set.</p>
     */
    inline const Aws::Utils::DateTime& GetSupportedUntil() const{ return m_supportedUntil; }
    inline bool SupportedUntilHasBeenSet() const { return m_supportedUntilHasBeenSet; }
    inline void SetSupportedUntil(const Aws::Utils::DateTime& value) { m_supportedUntilHasBeenSet = true; m_supportedUntil = value; }
    inline void SetSupportedUntil(Aws::Utils::DateTime&& value) { m_supportedUntilHasBeenSet = true; m_supportedUntil = std::move(value); }
    inline SoftwareSetSummary& WithSupportedUntil(const Aws::Utils::DateTime& value) { SetSupportedUntil(value); return *this;}
    inline SoftwareSetSummary& WithSupportedUntil(Aws::Utils::DateTime&& value) { SetSupportedUntil(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to define if the software set has been validated.</p>
     */
    inline const SoftwareSetValidationStatus& GetValidationStatus() const{ return m_validationStatus; }
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }
    inline void SetValidationStatus(const SoftwareSetValidationStatus& value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }
    inline void SetValidationStatus(SoftwareSetValidationStatus&& value) { m_validationStatusHasBeenSet = true; m_validationStatus = std::move(value); }
    inline SoftwareSetSummary& WithValidationStatus(const SoftwareSetValidationStatus& value) { SetValidationStatus(value); return *this;}
    inline SoftwareSetSummary& WithValidationStatus(SoftwareSetValidationStatus&& value) { SetValidationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the software set.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline SoftwareSetSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline SoftwareSetSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline SoftwareSetSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_releasedAt;
    bool m_releasedAtHasBeenSet = false;

    Aws::Utils::DateTime m_supportedUntil;
    bool m_supportedUntilHasBeenSet = false;

    SoftwareSetValidationStatus m_validationStatus;
    bool m_validationStatusHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
