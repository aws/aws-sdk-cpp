/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/workspaces-thin-client/model/SoftwareSetValidationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-thin-client/model/Software.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/SoftwareSet">AWS
   * API Reference</a></p>
   */
  class SoftwareSet
  {
  public:
    AWS_WORKSPACESTHINCLIENT_API SoftwareSet();
    AWS_WORKSPACESTHINCLIENT_API SoftwareSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API SoftwareSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the software set.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the software set.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the software set.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the software set.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the software set.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the software set.</p>
     */
    inline SoftwareSet& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the software set.</p>
     */
    inline SoftwareSet& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the software set.</p>
     */
    inline SoftwareSet& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The version of the software set.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the software set.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the software set.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the software set.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the software set.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the software set.</p>
     */
    inline SoftwareSet& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the software set.</p>
     */
    inline SoftwareSet& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the software set.</p>
     */
    inline SoftwareSet& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The timestamp of when the software set was released.</p>
     */
    inline const Aws::Utils::DateTime& GetReleasedAt() const{ return m_releasedAt; }

    /**
     * <p>The timestamp of when the software set was released.</p>
     */
    inline bool ReleasedAtHasBeenSet() const { return m_releasedAtHasBeenSet; }

    /**
     * <p>The timestamp of when the software set was released.</p>
     */
    inline void SetReleasedAt(const Aws::Utils::DateTime& value) { m_releasedAtHasBeenSet = true; m_releasedAt = value; }

    /**
     * <p>The timestamp of when the software set was released.</p>
     */
    inline void SetReleasedAt(Aws::Utils::DateTime&& value) { m_releasedAtHasBeenSet = true; m_releasedAt = std::move(value); }

    /**
     * <p>The timestamp of when the software set was released.</p>
     */
    inline SoftwareSet& WithReleasedAt(const Aws::Utils::DateTime& value) { SetReleasedAt(value); return *this;}

    /**
     * <p>The timestamp of when the software set was released.</p>
     */
    inline SoftwareSet& WithReleasedAt(Aws::Utils::DateTime&& value) { SetReleasedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp of the end of support for the software set.</p>
     */
    inline const Aws::Utils::DateTime& GetSupportedUntil() const{ return m_supportedUntil; }

    /**
     * <p>The timestamp of the end of support for the software set.</p>
     */
    inline bool SupportedUntilHasBeenSet() const { return m_supportedUntilHasBeenSet; }

    /**
     * <p>The timestamp of the end of support for the software set.</p>
     */
    inline void SetSupportedUntil(const Aws::Utils::DateTime& value) { m_supportedUntilHasBeenSet = true; m_supportedUntil = value; }

    /**
     * <p>The timestamp of the end of support for the software set.</p>
     */
    inline void SetSupportedUntil(Aws::Utils::DateTime&& value) { m_supportedUntilHasBeenSet = true; m_supportedUntil = std::move(value); }

    /**
     * <p>The timestamp of the end of support for the software set.</p>
     */
    inline SoftwareSet& WithSupportedUntil(const Aws::Utils::DateTime& value) { SetSupportedUntil(value); return *this;}

    /**
     * <p>The timestamp of the end of support for the software set.</p>
     */
    inline SoftwareSet& WithSupportedUntil(Aws::Utils::DateTime&& value) { SetSupportedUntil(std::move(value)); return *this;}


    /**
     * <p>An option to define if the software set has been validated.</p>
     */
    inline const SoftwareSetValidationStatus& GetValidationStatus() const{ return m_validationStatus; }

    /**
     * <p>An option to define if the software set has been validated.</p>
     */
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }

    /**
     * <p>An option to define if the software set has been validated.</p>
     */
    inline void SetValidationStatus(const SoftwareSetValidationStatus& value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }

    /**
     * <p>An option to define if the software set has been validated.</p>
     */
    inline void SetValidationStatus(SoftwareSetValidationStatus&& value) { m_validationStatusHasBeenSet = true; m_validationStatus = std::move(value); }

    /**
     * <p>An option to define if the software set has been validated.</p>
     */
    inline SoftwareSet& WithValidationStatus(const SoftwareSetValidationStatus& value) { SetValidationStatus(value); return *this;}

    /**
     * <p>An option to define if the software set has been validated.</p>
     */
    inline SoftwareSet& WithValidationStatus(SoftwareSetValidationStatus&& value) { SetValidationStatus(std::move(value)); return *this;}


    /**
     * <p>A list of the software components in the software set.</p>
     */
    inline const Aws::Vector<Software>& GetSoftware() const{ return m_software; }

    /**
     * <p>A list of the software components in the software set.</p>
     */
    inline bool SoftwareHasBeenSet() const { return m_softwareHasBeenSet; }

    /**
     * <p>A list of the software components in the software set.</p>
     */
    inline void SetSoftware(const Aws::Vector<Software>& value) { m_softwareHasBeenSet = true; m_software = value; }

    /**
     * <p>A list of the software components in the software set.</p>
     */
    inline void SetSoftware(Aws::Vector<Software>&& value) { m_softwareHasBeenSet = true; m_software = std::move(value); }

    /**
     * <p>A list of the software components in the software set.</p>
     */
    inline SoftwareSet& WithSoftware(const Aws::Vector<Software>& value) { SetSoftware(value); return *this;}

    /**
     * <p>A list of the software components in the software set.</p>
     */
    inline SoftwareSet& WithSoftware(Aws::Vector<Software>&& value) { SetSoftware(std::move(value)); return *this;}

    /**
     * <p>A list of the software components in the software set.</p>
     */
    inline SoftwareSet& AddSoftware(const Software& value) { m_softwareHasBeenSet = true; m_software.push_back(value); return *this; }

    /**
     * <p>A list of the software components in the software set.</p>
     */
    inline SoftwareSet& AddSoftware(Software&& value) { m_softwareHasBeenSet = true; m_software.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the software set.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the software set.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the software set.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the software set.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the software set.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the software set.</p>
     */
    inline SoftwareSet& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the software set.</p>
     */
    inline SoftwareSet& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the software set.</p>
     */
    inline SoftwareSet& WithArn(const char* value) { SetArn(value); return *this;}

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

    Aws::Vector<Software> m_software;
    bool m_softwareHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
