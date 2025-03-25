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
    AWS_WORKSPACESTHINCLIENT_API SoftwareSet() = default;
    AWS_WORKSPACESTHINCLIENT_API SoftwareSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API SoftwareSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the software set.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SoftwareSet& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the software set.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    SoftwareSet& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the software set was released.</p>
     */
    inline const Aws::Utils::DateTime& GetReleasedAt() const { return m_releasedAt; }
    inline bool ReleasedAtHasBeenSet() const { return m_releasedAtHasBeenSet; }
    template<typename ReleasedAtT = Aws::Utils::DateTime>
    void SetReleasedAt(ReleasedAtT&& value) { m_releasedAtHasBeenSet = true; m_releasedAt = std::forward<ReleasedAtT>(value); }
    template<typename ReleasedAtT = Aws::Utils::DateTime>
    SoftwareSet& WithReleasedAt(ReleasedAtT&& value) { SetReleasedAt(std::forward<ReleasedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the end of support for the software set.</p>
     */
    inline const Aws::Utils::DateTime& GetSupportedUntil() const { return m_supportedUntil; }
    inline bool SupportedUntilHasBeenSet() const { return m_supportedUntilHasBeenSet; }
    template<typename SupportedUntilT = Aws::Utils::DateTime>
    void SetSupportedUntil(SupportedUntilT&& value) { m_supportedUntilHasBeenSet = true; m_supportedUntil = std::forward<SupportedUntilT>(value); }
    template<typename SupportedUntilT = Aws::Utils::DateTime>
    SoftwareSet& WithSupportedUntil(SupportedUntilT&& value) { SetSupportedUntil(std::forward<SupportedUntilT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to define if the software set has been validated.</p>
     */
    inline SoftwareSetValidationStatus GetValidationStatus() const { return m_validationStatus; }
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }
    inline void SetValidationStatus(SoftwareSetValidationStatus value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }
    inline SoftwareSet& WithValidationStatus(SoftwareSetValidationStatus value) { SetValidationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the software components in the software set.</p>
     */
    inline const Aws::Vector<Software>& GetSoftware() const { return m_software; }
    inline bool SoftwareHasBeenSet() const { return m_softwareHasBeenSet; }
    template<typename SoftwareT = Aws::Vector<Software>>
    void SetSoftware(SoftwareT&& value) { m_softwareHasBeenSet = true; m_software = std::forward<SoftwareT>(value); }
    template<typename SoftwareT = Aws::Vector<Software>>
    SoftwareSet& WithSoftware(SoftwareT&& value) { SetSoftware(std::forward<SoftwareT>(value)); return *this;}
    template<typename SoftwareT = Software>
    SoftwareSet& AddSoftware(SoftwareT&& value) { m_softwareHasBeenSet = true; m_software.emplace_back(std::forward<SoftwareT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the software set.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    SoftwareSet& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_releasedAt{};
    bool m_releasedAtHasBeenSet = false;

    Aws::Utils::DateTime m_supportedUntil{};
    bool m_supportedUntilHasBeenSet = false;

    SoftwareSetValidationStatus m_validationStatus{SoftwareSetValidationStatus::NOT_SET};
    bool m_validationStatusHasBeenSet = false;

    Aws::Vector<Software> m_software;
    bool m_softwareHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
