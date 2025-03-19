/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p> The label detection settings you want to use in your stream processor. This
   * includes the labels you want the stream processor to detect and the minimum
   * confidence level allowed to label objects. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ConnectedHomeSettingsForUpdate">AWS
   * API Reference</a></p>
   */
  class ConnectedHomeSettingsForUpdate
  {
  public:
    AWS_REKOGNITION_API ConnectedHomeSettingsForUpdate() = default;
    AWS_REKOGNITION_API ConnectedHomeSettingsForUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ConnectedHomeSettingsForUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies what you want to detect in the video, such as people, packages, or
     * pets. The current valid labels you can include in this list are: "PERSON",
     * "PET", "PACKAGE", and "ALL". </p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const { return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    template<typename LabelsT = Aws::Vector<Aws::String>>
    void SetLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels = std::forward<LabelsT>(value); }
    template<typename LabelsT = Aws::Vector<Aws::String>>
    ConnectedHomeSettingsForUpdate& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsT = Aws::String>
    ConnectedHomeSettingsForUpdate& AddLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels.emplace_back(std::forward<LabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The minimum confidence required to label an object in the video. </p>
     */
    inline double GetMinConfidence() const { return m_minConfidence; }
    inline bool MinConfidenceHasBeenSet() const { return m_minConfidenceHasBeenSet; }
    inline void SetMinConfidence(double value) { m_minConfidenceHasBeenSet = true; m_minConfidence = value; }
    inline ConnectedHomeSettingsForUpdate& WithMinConfidence(double value) { SetMinConfidence(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;

    double m_minConfidence{0.0};
    bool m_minConfidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
