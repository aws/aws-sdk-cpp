/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Provides feature transformation information. Feature transformation is the
   * process of modifying raw input data into a form more suitable for model
   * training.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/FeatureTransformation">AWS
   * API Reference</a></p>
   */
  class FeatureTransformation
  {
  public:
    AWS_PERSONALIZE_API FeatureTransformation() = default;
    AWS_PERSONALIZE_API FeatureTransformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API FeatureTransformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the feature transformation.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    FeatureTransformation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the FeatureTransformation object.</p>
     */
    inline const Aws::String& GetFeatureTransformationArn() const { return m_featureTransformationArn; }
    inline bool FeatureTransformationArnHasBeenSet() const { return m_featureTransformationArnHasBeenSet; }
    template<typename FeatureTransformationArnT = Aws::String>
    void SetFeatureTransformationArn(FeatureTransformationArnT&& value) { m_featureTransformationArnHasBeenSet = true; m_featureTransformationArn = std::forward<FeatureTransformationArnT>(value); }
    template<typename FeatureTransformationArnT = Aws::String>
    FeatureTransformation& WithFeatureTransformationArn(FeatureTransformationArnT&& value) { SetFeatureTransformationArn(std::forward<FeatureTransformationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the default parameters for feature transformation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultParameters() const { return m_defaultParameters; }
    inline bool DefaultParametersHasBeenSet() const { return m_defaultParametersHasBeenSet; }
    template<typename DefaultParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetDefaultParameters(DefaultParametersT&& value) { m_defaultParametersHasBeenSet = true; m_defaultParameters = std::forward<DefaultParametersT>(value); }
    template<typename DefaultParametersT = Aws::Map<Aws::String, Aws::String>>
    FeatureTransformation& WithDefaultParameters(DefaultParametersT&& value) { SetDefaultParameters(std::forward<DefaultParametersT>(value)); return *this;}
    template<typename DefaultParametersKeyT = Aws::String, typename DefaultParametersValueT = Aws::String>
    FeatureTransformation& AddDefaultParameters(DefaultParametersKeyT&& key, DefaultParametersValueT&& value) {
      m_defaultParametersHasBeenSet = true; m_defaultParameters.emplace(std::forward<DefaultParametersKeyT>(key), std::forward<DefaultParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The creation date and time (in Unix time) of the feature transformation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    FeatureTransformation& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last update date and time (in Unix time) of the feature
     * transformation.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    FeatureTransformation& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the feature transformation.</p> <p>A feature transformation can
     * be in one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    FeatureTransformation& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_featureTransformationArn;
    bool m_featureTransformationArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_defaultParameters;
    bool m_defaultParametersHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
