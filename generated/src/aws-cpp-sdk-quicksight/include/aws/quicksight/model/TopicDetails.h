/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TopicUserExperienceVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/TopicConfigOptions.h>
#include <aws/quicksight/model/DatasetMetadata.h>
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
   * <p>A structure that describes the details of a topic, such as its name,
   * description, and associated data sets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicDetails">AWS
   * API Reference</a></p>
   */
  class TopicDetails
  {
  public:
    AWS_QUICKSIGHT_API TopicDetails() = default;
    AWS_QUICKSIGHT_API TopicDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the topic.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TopicDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the topic.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TopicDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user experience version of a topic.</p>
     */
    inline TopicUserExperienceVersion GetUserExperienceVersion() const { return m_userExperienceVersion; }
    inline bool UserExperienceVersionHasBeenSet() const { return m_userExperienceVersionHasBeenSet; }
    inline void SetUserExperienceVersion(TopicUserExperienceVersion value) { m_userExperienceVersionHasBeenSet = true; m_userExperienceVersion = value; }
    inline TopicDetails& WithUserExperienceVersion(TopicUserExperienceVersion value) { SetUserExperienceVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data sets that the topic is associated with.</p>
     */
    inline const Aws::Vector<DatasetMetadata>& GetDataSets() const { return m_dataSets; }
    inline bool DataSetsHasBeenSet() const { return m_dataSetsHasBeenSet; }
    template<typename DataSetsT = Aws::Vector<DatasetMetadata>>
    void SetDataSets(DataSetsT&& value) { m_dataSetsHasBeenSet = true; m_dataSets = std::forward<DataSetsT>(value); }
    template<typename DataSetsT = Aws::Vector<DatasetMetadata>>
    TopicDetails& WithDataSets(DataSetsT&& value) { SetDataSets(std::forward<DataSetsT>(value)); return *this;}
    template<typename DataSetsT = DatasetMetadata>
    TopicDetails& AddDataSets(DataSetsT&& value) { m_dataSetsHasBeenSet = true; m_dataSets.emplace_back(std::forward<DataSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration options for a <code>Topic</code>.</p>
     */
    inline const TopicConfigOptions& GetConfigOptions() const { return m_configOptions; }
    inline bool ConfigOptionsHasBeenSet() const { return m_configOptionsHasBeenSet; }
    template<typename ConfigOptionsT = TopicConfigOptions>
    void SetConfigOptions(ConfigOptionsT&& value) { m_configOptionsHasBeenSet = true; m_configOptions = std::forward<ConfigOptionsT>(value); }
    template<typename ConfigOptionsT = TopicConfigOptions>
    TopicDetails& WithConfigOptions(ConfigOptionsT&& value) { SetConfigOptions(std::forward<ConfigOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TopicUserExperienceVersion m_userExperienceVersion{TopicUserExperienceVersion::NOT_SET};
    bool m_userExperienceVersionHasBeenSet = false;

    Aws::Vector<DatasetMetadata> m_dataSets;
    bool m_dataSetsHasBeenSet = false;

    TopicConfigOptions m_configOptions;
    bool m_configOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
