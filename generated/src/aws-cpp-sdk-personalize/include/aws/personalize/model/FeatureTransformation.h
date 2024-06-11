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
    AWS_PERSONALIZE_API FeatureTransformation();
    AWS_PERSONALIZE_API FeatureTransformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API FeatureTransformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the feature transformation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FeatureTransformation& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FeatureTransformation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FeatureTransformation& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the FeatureTransformation object.</p>
     */
    inline const Aws::String& GetFeatureTransformationArn() const{ return m_featureTransformationArn; }
    inline bool FeatureTransformationArnHasBeenSet() const { return m_featureTransformationArnHasBeenSet; }
    inline void SetFeatureTransformationArn(const Aws::String& value) { m_featureTransformationArnHasBeenSet = true; m_featureTransformationArn = value; }
    inline void SetFeatureTransformationArn(Aws::String&& value) { m_featureTransformationArnHasBeenSet = true; m_featureTransformationArn = std::move(value); }
    inline void SetFeatureTransformationArn(const char* value) { m_featureTransformationArnHasBeenSet = true; m_featureTransformationArn.assign(value); }
    inline FeatureTransformation& WithFeatureTransformationArn(const Aws::String& value) { SetFeatureTransformationArn(value); return *this;}
    inline FeatureTransformation& WithFeatureTransformationArn(Aws::String&& value) { SetFeatureTransformationArn(std::move(value)); return *this;}
    inline FeatureTransformation& WithFeatureTransformationArn(const char* value) { SetFeatureTransformationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the default parameters for feature transformation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultParameters() const{ return m_defaultParameters; }
    inline bool DefaultParametersHasBeenSet() const { return m_defaultParametersHasBeenSet; }
    inline void SetDefaultParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_defaultParametersHasBeenSet = true; m_defaultParameters = value; }
    inline void SetDefaultParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_defaultParametersHasBeenSet = true; m_defaultParameters = std::move(value); }
    inline FeatureTransformation& WithDefaultParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetDefaultParameters(value); return *this;}
    inline FeatureTransformation& WithDefaultParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetDefaultParameters(std::move(value)); return *this;}
    inline FeatureTransformation& AddDefaultParameters(const Aws::String& key, const Aws::String& value) { m_defaultParametersHasBeenSet = true; m_defaultParameters.emplace(key, value); return *this; }
    inline FeatureTransformation& AddDefaultParameters(Aws::String&& key, const Aws::String& value) { m_defaultParametersHasBeenSet = true; m_defaultParameters.emplace(std::move(key), value); return *this; }
    inline FeatureTransformation& AddDefaultParameters(const Aws::String& key, Aws::String&& value) { m_defaultParametersHasBeenSet = true; m_defaultParameters.emplace(key, std::move(value)); return *this; }
    inline FeatureTransformation& AddDefaultParameters(Aws::String&& key, Aws::String&& value) { m_defaultParametersHasBeenSet = true; m_defaultParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline FeatureTransformation& AddDefaultParameters(const char* key, Aws::String&& value) { m_defaultParametersHasBeenSet = true; m_defaultParameters.emplace(key, std::move(value)); return *this; }
    inline FeatureTransformation& AddDefaultParameters(Aws::String&& key, const char* value) { m_defaultParametersHasBeenSet = true; m_defaultParameters.emplace(std::move(key), value); return *this; }
    inline FeatureTransformation& AddDefaultParameters(const char* key, const char* value) { m_defaultParametersHasBeenSet = true; m_defaultParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The creation date and time (in Unix time) of the feature transformation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline FeatureTransformation& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline FeatureTransformation& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last update date and time (in Unix time) of the feature
     * transformation.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline FeatureTransformation& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline FeatureTransformation& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the feature transformation.</p> <p>A feature transformation can
     * be in one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
     * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline FeatureTransformation& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline FeatureTransformation& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline FeatureTransformation& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_featureTransformationArn;
    bool m_featureTransformationArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_defaultParameters;
    bool m_defaultParametersHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
