/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TopicUserExperienceVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_QUICKSIGHT_API TopicDetails();
    AWS_QUICKSIGHT_API TopicDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the topic.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the topic.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the topic.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the topic.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the topic.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the topic.</p>
     */
    inline TopicDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the topic.</p>
     */
    inline TopicDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the topic.</p>
     */
    inline TopicDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the topic.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the topic.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the topic.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the topic.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the topic.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the topic.</p>
     */
    inline TopicDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the topic.</p>
     */
    inline TopicDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the topic.</p>
     */
    inline TopicDetails& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The user experience version of a topic.</p>
     */
    inline const TopicUserExperienceVersion& GetUserExperienceVersion() const{ return m_userExperienceVersion; }

    /**
     * <p>The user experience version of a topic.</p>
     */
    inline bool UserExperienceVersionHasBeenSet() const { return m_userExperienceVersionHasBeenSet; }

    /**
     * <p>The user experience version of a topic.</p>
     */
    inline void SetUserExperienceVersion(const TopicUserExperienceVersion& value) { m_userExperienceVersionHasBeenSet = true; m_userExperienceVersion = value; }

    /**
     * <p>The user experience version of a topic.</p>
     */
    inline void SetUserExperienceVersion(TopicUserExperienceVersion&& value) { m_userExperienceVersionHasBeenSet = true; m_userExperienceVersion = std::move(value); }

    /**
     * <p>The user experience version of a topic.</p>
     */
    inline TopicDetails& WithUserExperienceVersion(const TopicUserExperienceVersion& value) { SetUserExperienceVersion(value); return *this;}

    /**
     * <p>The user experience version of a topic.</p>
     */
    inline TopicDetails& WithUserExperienceVersion(TopicUserExperienceVersion&& value) { SetUserExperienceVersion(std::move(value)); return *this;}


    /**
     * <p>The data sets that the topic is associated with.</p>
     */
    inline const Aws::Vector<DatasetMetadata>& GetDataSets() const{ return m_dataSets; }

    /**
     * <p>The data sets that the topic is associated with.</p>
     */
    inline bool DataSetsHasBeenSet() const { return m_dataSetsHasBeenSet; }

    /**
     * <p>The data sets that the topic is associated with.</p>
     */
    inline void SetDataSets(const Aws::Vector<DatasetMetadata>& value) { m_dataSetsHasBeenSet = true; m_dataSets = value; }

    /**
     * <p>The data sets that the topic is associated with.</p>
     */
    inline void SetDataSets(Aws::Vector<DatasetMetadata>&& value) { m_dataSetsHasBeenSet = true; m_dataSets = std::move(value); }

    /**
     * <p>The data sets that the topic is associated with.</p>
     */
    inline TopicDetails& WithDataSets(const Aws::Vector<DatasetMetadata>& value) { SetDataSets(value); return *this;}

    /**
     * <p>The data sets that the topic is associated with.</p>
     */
    inline TopicDetails& WithDataSets(Aws::Vector<DatasetMetadata>&& value) { SetDataSets(std::move(value)); return *this;}

    /**
     * <p>The data sets that the topic is associated with.</p>
     */
    inline TopicDetails& AddDataSets(const DatasetMetadata& value) { m_dataSetsHasBeenSet = true; m_dataSets.push_back(value); return *this; }

    /**
     * <p>The data sets that the topic is associated with.</p>
     */
    inline TopicDetails& AddDataSets(DatasetMetadata&& value) { m_dataSetsHasBeenSet = true; m_dataSets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TopicUserExperienceVersion m_userExperienceVersion;
    bool m_userExperienceVersionHasBeenSet = false;

    Aws::Vector<DatasetMetadata> m_dataSets;
    bool m_dataSetsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
