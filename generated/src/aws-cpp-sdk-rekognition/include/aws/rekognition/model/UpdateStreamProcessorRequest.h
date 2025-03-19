/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/StreamProcessorSettingsForUpdate.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/StreamProcessorDataSharingPreference.h>
#include <aws/rekognition/model/RegionOfInterest.h>
#include <aws/rekognition/model/StreamProcessorParameterToDelete.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class UpdateStreamProcessorRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API UpdateStreamProcessorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStreamProcessor"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> Name of the stream processor that you want to update. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateStreamProcessorRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The stream processor settings that you want to update. Label detection
     * settings can be updated to detect different labels with a different minimum
     * confidence. </p>
     */
    inline const StreamProcessorSettingsForUpdate& GetSettingsForUpdate() const { return m_settingsForUpdate; }
    inline bool SettingsForUpdateHasBeenSet() const { return m_settingsForUpdateHasBeenSet; }
    template<typename SettingsForUpdateT = StreamProcessorSettingsForUpdate>
    void SetSettingsForUpdate(SettingsForUpdateT&& value) { m_settingsForUpdateHasBeenSet = true; m_settingsForUpdate = std::forward<SettingsForUpdateT>(value); }
    template<typename SettingsForUpdateT = StreamProcessorSettingsForUpdate>
    UpdateStreamProcessorRequest& WithSettingsForUpdate(SettingsForUpdateT&& value) { SetSettingsForUpdate(std::forward<SettingsForUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. This is an optional parameter for label detection stream
     * processors. </p>
     */
    inline const Aws::Vector<RegionOfInterest>& GetRegionsOfInterestForUpdate() const { return m_regionsOfInterestForUpdate; }
    inline bool RegionsOfInterestForUpdateHasBeenSet() const { return m_regionsOfInterestForUpdateHasBeenSet; }
    template<typename RegionsOfInterestForUpdateT = Aws::Vector<RegionOfInterest>>
    void SetRegionsOfInterestForUpdate(RegionsOfInterestForUpdateT&& value) { m_regionsOfInterestForUpdateHasBeenSet = true; m_regionsOfInterestForUpdate = std::forward<RegionsOfInterestForUpdateT>(value); }
    template<typename RegionsOfInterestForUpdateT = Aws::Vector<RegionOfInterest>>
    UpdateStreamProcessorRequest& WithRegionsOfInterestForUpdate(RegionsOfInterestForUpdateT&& value) { SetRegionsOfInterestForUpdate(std::forward<RegionsOfInterestForUpdateT>(value)); return *this;}
    template<typename RegionsOfInterestForUpdateT = RegionOfInterest>
    UpdateStreamProcessorRequest& AddRegionsOfInterestForUpdate(RegionsOfInterestForUpdateT&& value) { m_regionsOfInterestForUpdateHasBeenSet = true; m_regionsOfInterestForUpdate.emplace_back(std::forward<RegionsOfInterestForUpdateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline const StreamProcessorDataSharingPreference& GetDataSharingPreferenceForUpdate() const { return m_dataSharingPreferenceForUpdate; }
    inline bool DataSharingPreferenceForUpdateHasBeenSet() const { return m_dataSharingPreferenceForUpdateHasBeenSet; }
    template<typename DataSharingPreferenceForUpdateT = StreamProcessorDataSharingPreference>
    void SetDataSharingPreferenceForUpdate(DataSharingPreferenceForUpdateT&& value) { m_dataSharingPreferenceForUpdateHasBeenSet = true; m_dataSharingPreferenceForUpdate = std::forward<DataSharingPreferenceForUpdateT>(value); }
    template<typename DataSharingPreferenceForUpdateT = StreamProcessorDataSharingPreference>
    UpdateStreamProcessorRequest& WithDataSharingPreferenceForUpdate(DataSharingPreferenceForUpdateT&& value) { SetDataSharingPreferenceForUpdate(std::forward<DataSharingPreferenceForUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of parameters you want to delete from the stream processor. </p>
     */
    inline const Aws::Vector<StreamProcessorParameterToDelete>& GetParametersToDelete() const { return m_parametersToDelete; }
    inline bool ParametersToDeleteHasBeenSet() const { return m_parametersToDeleteHasBeenSet; }
    template<typename ParametersToDeleteT = Aws::Vector<StreamProcessorParameterToDelete>>
    void SetParametersToDelete(ParametersToDeleteT&& value) { m_parametersToDeleteHasBeenSet = true; m_parametersToDelete = std::forward<ParametersToDeleteT>(value); }
    template<typename ParametersToDeleteT = Aws::Vector<StreamProcessorParameterToDelete>>
    UpdateStreamProcessorRequest& WithParametersToDelete(ParametersToDeleteT&& value) { SetParametersToDelete(std::forward<ParametersToDeleteT>(value)); return *this;}
    inline UpdateStreamProcessorRequest& AddParametersToDelete(StreamProcessorParameterToDelete value) { m_parametersToDeleteHasBeenSet = true; m_parametersToDelete.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StreamProcessorSettingsForUpdate m_settingsForUpdate;
    bool m_settingsForUpdateHasBeenSet = false;

    Aws::Vector<RegionOfInterest> m_regionsOfInterestForUpdate;
    bool m_regionsOfInterestForUpdateHasBeenSet = false;

    StreamProcessorDataSharingPreference m_dataSharingPreferenceForUpdate;
    bool m_dataSharingPreferenceForUpdateHasBeenSet = false;

    Aws::Vector<StreamProcessorParameterToDelete> m_parametersToDelete;
    bool m_parametersToDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
