/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/medialive/model/SdiSourceMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/SdiSourceType.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to update the SdiSource.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateSdiSourceRequest">AWS
   * API Reference</a></p>
   */
  class UpdateSdiSourceRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API UpdateSdiSourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSdiSource"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Include this parameter only if you want to change the name of the SdiSource.
     * Specify a name that is unique in the AWS account. We recommend you assign a name
     * that describes the source, for example curling-cameraA. Names are
     * case-sensitive.
     */
    inline SdiSourceMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(SdiSourceMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline UpdateSdiSourceRequest& WithMode(SdiSourceMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Include this parameter only if you want to change the name of the SdiSource.
     * Specify a name that is unique in the AWS account. We recommend you assign a name
     * that describes the source, for example curling-cameraA. Names are
     * case-sensitive.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateSdiSourceRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the SdiSource
     */
    inline const Aws::String& GetSdiSourceId() const { return m_sdiSourceId; }
    inline bool SdiSourceIdHasBeenSet() const { return m_sdiSourceIdHasBeenSet; }
    template<typename SdiSourceIdT = Aws::String>
    void SetSdiSourceId(SdiSourceIdT&& value) { m_sdiSourceIdHasBeenSet = true; m_sdiSourceId = std::forward<SdiSourceIdT>(value); }
    template<typename SdiSourceIdT = Aws::String>
    UpdateSdiSourceRequest& WithSdiSourceId(SdiSourceIdT&& value) { SetSdiSourceId(std::forward<SdiSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Include this parameter only if you want to change the mode. Specify the type of
     * the SDI source: SINGLE: The source is a single-link source. QUAD: The source is
     * one part of a quad-link source.
     */
    inline SdiSourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SdiSourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline UpdateSdiSourceRequest& WithType(SdiSourceType value) { SetType(value); return *this;}
    ///@}
  private:

    SdiSourceMode m_mode{SdiSourceMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_sdiSourceId;
    bool m_sdiSourceIdHasBeenSet = false;

    SdiSourceType m_type{SdiSourceType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
