/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/SdiSourceMode.h>
#include <aws/medialive/model/SdiSourceState.h>
#include <aws/medialive/model/SdiSourceType.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Used in CreateSdiSourceResponse, DeleteSdiSourceResponse,
   * DescribeSdiSourceResponse, ListSdiSourcesResponse,
   * UpdateSdiSourceResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/SdiSourceSummary">AWS
   * API Reference</a></p>
   */
  class SdiSourceSummary
  {
  public:
    AWS_MEDIALIVE_API SdiSourceSummary() = default;
    AWS_MEDIALIVE_API SdiSourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API SdiSourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of this SdiSource. It is automatically assigned when the SdiSource is
     * created.
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    SdiSourceSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the SdiSource. Unique in the AWS account.The ID is the resource-id
     * portion of the ARN.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SdiSourceSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The list of inputs that are currently using this SDI source. This list will be
     * empty if the SdiSource has just been deleted.
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<Aws::String>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<Aws::String>>
    SdiSourceSummary& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    SdiSourceSummary& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Applies only if the type is QUAD. The mode for handling the quad-link signal
     * QUADRANT or INTERLEAVE.
     */
    inline SdiSourceMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(SdiSourceMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline SdiSourceSummary& WithMode(SdiSourceMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the SdiSource.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SdiSourceSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies whether the SDI source is attached to an SDI input (IN_USE) or not
     * (IDLE).
     */
    inline SdiSourceState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(SdiSourceState value) { m_stateHasBeenSet = true; m_state = value; }
    inline SdiSourceSummary& WithState(SdiSourceState value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline SdiSourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SdiSourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SdiSourceSummary& WithType(SdiSourceType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    SdiSourceMode m_mode{SdiSourceMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SdiSourceState m_state{SdiSourceState::NOT_SET};
    bool m_stateHasBeenSet = false;

    SdiSourceType m_type{SdiSourceType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
