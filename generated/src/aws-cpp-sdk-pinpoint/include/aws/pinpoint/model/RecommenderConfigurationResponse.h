/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about Amazon Pinpoint configuration settings for
   * retrieving and processing data from a recommender model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/RecommenderConfigurationResponse">AWS
   * API Reference</a></p>
   */
  class RecommenderConfigurationResponse
  {
  public:
    AWS_PINPOINT_API RecommenderConfigurationResponse();
    AWS_PINPOINT_API RecommenderConfigurationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API RecommenderConfigurationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A map that defines 1-10 custom endpoint or user attributes, depending on the
     * value for the RecommendationProviderIdType property. Each of these attributes
     * temporarily stores a recommended item that's retrieved from the recommender
     * model and sent to an AWS Lambda function for additional processing. Each
     * attribute can be used as a message variable in a message template.</p> <p>This
     * value is null if the configuration doesn't invoke an AWS Lambda function
     * (RecommendationTransformerUri) to perform additional processing of
     * recommendation data.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline RecommenderConfigurationResponse& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline RecommenderConfigurationResponse& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline RecommenderConfigurationResponse& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline RecommenderConfigurationResponse& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline RecommenderConfigurationResponse& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline RecommenderConfigurationResponse& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline RecommenderConfigurationResponse& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline RecommenderConfigurationResponse& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline RecommenderConfigurationResponse& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date, in extended ISO 8601 format, when the configuration was created for
     * the recommender model.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }
    inline RecommenderConfigurationResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}
    inline RecommenderConfigurationResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}
    inline RecommenderConfigurationResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom description of the configuration for the recommender model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline RecommenderConfigurationResponse& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline RecommenderConfigurationResponse& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline RecommenderConfigurationResponse& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the recommender model configuration.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline RecommenderConfigurationResponse& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline RecommenderConfigurationResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline RecommenderConfigurationResponse& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in extended ISO 8601 format, when the configuration for the
     * recommender model was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }
    inline RecommenderConfigurationResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}
    inline RecommenderConfigurationResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    inline RecommenderConfigurationResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom name of the configuration for the recommender model.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RecommenderConfigurationResponse& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RecommenderConfigurationResponse& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RecommenderConfigurationResponse& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Pinpoint ID that's associated with unique user IDs in the
     * recommender model. This value enables the model to use attribute and event data
     * that’s specific to a particular endpoint or user in an Amazon Pinpoint
     * application. Possible values are:</p> <ul><li><p>PINPOINT_ENDPOINT_ID - Each
     * user in the model is associated with a particular endpoint in Amazon Pinpoint.
     * The data is correlated based on endpoint IDs in Amazon Pinpoint. This is the
     * default value.</p></li> <li><p>PINPOINT_USER_ID - Each user in the model is
     * associated with a particular user and endpoint in Amazon Pinpoint. The data is
     * correlated based on user IDs in Amazon Pinpoint. If this value is specified, an
     * endpoint definition in Amazon Pinpoint has to specify both a user ID (UserId)
     * and an endpoint ID. Otherwise, messages won’t be sent to the user's
     * endpoint.</p></li></ul>
     */
    inline const Aws::String& GetRecommendationProviderIdType() const{ return m_recommendationProviderIdType; }
    inline bool RecommendationProviderIdTypeHasBeenSet() const { return m_recommendationProviderIdTypeHasBeenSet; }
    inline void SetRecommendationProviderIdType(const Aws::String& value) { m_recommendationProviderIdTypeHasBeenSet = true; m_recommendationProviderIdType = value; }
    inline void SetRecommendationProviderIdType(Aws::String&& value) { m_recommendationProviderIdTypeHasBeenSet = true; m_recommendationProviderIdType = std::move(value); }
    inline void SetRecommendationProviderIdType(const char* value) { m_recommendationProviderIdTypeHasBeenSet = true; m_recommendationProviderIdType.assign(value); }
    inline RecommenderConfigurationResponse& WithRecommendationProviderIdType(const Aws::String& value) { SetRecommendationProviderIdType(value); return *this;}
    inline RecommenderConfigurationResponse& WithRecommendationProviderIdType(Aws::String&& value) { SetRecommendationProviderIdType(std::move(value)); return *this;}
    inline RecommenderConfigurationResponse& WithRecommendationProviderIdType(const char* value) { SetRecommendationProviderIdType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to retrieve recommendation data from
     * the recommender model.</p>
     */
    inline const Aws::String& GetRecommendationProviderRoleArn() const{ return m_recommendationProviderRoleArn; }
    inline bool RecommendationProviderRoleArnHasBeenSet() const { return m_recommendationProviderRoleArnHasBeenSet; }
    inline void SetRecommendationProviderRoleArn(const Aws::String& value) { m_recommendationProviderRoleArnHasBeenSet = true; m_recommendationProviderRoleArn = value; }
    inline void SetRecommendationProviderRoleArn(Aws::String&& value) { m_recommendationProviderRoleArnHasBeenSet = true; m_recommendationProviderRoleArn = std::move(value); }
    inline void SetRecommendationProviderRoleArn(const char* value) { m_recommendationProviderRoleArnHasBeenSet = true; m_recommendationProviderRoleArn.assign(value); }
    inline RecommenderConfigurationResponse& WithRecommendationProviderRoleArn(const Aws::String& value) { SetRecommendationProviderRoleArn(value); return *this;}
    inline RecommenderConfigurationResponse& WithRecommendationProviderRoleArn(Aws::String&& value) { SetRecommendationProviderRoleArn(std::move(value)); return *this;}
    inline RecommenderConfigurationResponse& WithRecommendationProviderRoleArn(const char* value) { SetRecommendationProviderRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the recommender model that Amazon Pinpoint
     * retrieves the recommendation data from. This value is the ARN of an Amazon
     * Personalize campaign.</p>
     */
    inline const Aws::String& GetRecommendationProviderUri() const{ return m_recommendationProviderUri; }
    inline bool RecommendationProviderUriHasBeenSet() const { return m_recommendationProviderUriHasBeenSet; }
    inline void SetRecommendationProviderUri(const Aws::String& value) { m_recommendationProviderUriHasBeenSet = true; m_recommendationProviderUri = value; }
    inline void SetRecommendationProviderUri(Aws::String&& value) { m_recommendationProviderUriHasBeenSet = true; m_recommendationProviderUri = std::move(value); }
    inline void SetRecommendationProviderUri(const char* value) { m_recommendationProviderUriHasBeenSet = true; m_recommendationProviderUri.assign(value); }
    inline RecommenderConfigurationResponse& WithRecommendationProviderUri(const Aws::String& value) { SetRecommendationProviderUri(value); return *this;}
    inline RecommenderConfigurationResponse& WithRecommendationProviderUri(Aws::String&& value) { SetRecommendationProviderUri(std::move(value)); return *this;}
    inline RecommenderConfigurationResponse& WithRecommendationProviderUri(const char* value) { SetRecommendationProviderUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the AWS Lambda function that Amazon
     * Pinpoint invokes to perform additional processing of recommendation data that it
     * retrieves from the recommender model.</p>
     */
    inline const Aws::String& GetRecommendationTransformerUri() const{ return m_recommendationTransformerUri; }
    inline bool RecommendationTransformerUriHasBeenSet() const { return m_recommendationTransformerUriHasBeenSet; }
    inline void SetRecommendationTransformerUri(const Aws::String& value) { m_recommendationTransformerUriHasBeenSet = true; m_recommendationTransformerUri = value; }
    inline void SetRecommendationTransformerUri(Aws::String&& value) { m_recommendationTransformerUriHasBeenSet = true; m_recommendationTransformerUri = std::move(value); }
    inline void SetRecommendationTransformerUri(const char* value) { m_recommendationTransformerUriHasBeenSet = true; m_recommendationTransformerUri.assign(value); }
    inline RecommenderConfigurationResponse& WithRecommendationTransformerUri(const Aws::String& value) { SetRecommendationTransformerUri(value); return *this;}
    inline RecommenderConfigurationResponse& WithRecommendationTransformerUri(Aws::String&& value) { SetRecommendationTransformerUri(std::move(value)); return *this;}
    inline RecommenderConfigurationResponse& WithRecommendationTransformerUri(const char* value) { SetRecommendationTransformerUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom display name for the standard endpoint or user attribute
     * (RecommendationItems) that temporarily stores recommended items for each
     * endpoint or user, depending on the value for the RecommendationProviderIdType
     * property. This name appears in the <b>Attribute finder</b> of the template
     * editor on the Amazon Pinpoint console.</p> <p>This value is null if the
     * configuration doesn't invoke an AWS Lambda function
     * (RecommendationTransformerUri) to perform additional processing of
     * recommendation data.</p>
     */
    inline const Aws::String& GetRecommendationsDisplayName() const{ return m_recommendationsDisplayName; }
    inline bool RecommendationsDisplayNameHasBeenSet() const { return m_recommendationsDisplayNameHasBeenSet; }
    inline void SetRecommendationsDisplayName(const Aws::String& value) { m_recommendationsDisplayNameHasBeenSet = true; m_recommendationsDisplayName = value; }
    inline void SetRecommendationsDisplayName(Aws::String&& value) { m_recommendationsDisplayNameHasBeenSet = true; m_recommendationsDisplayName = std::move(value); }
    inline void SetRecommendationsDisplayName(const char* value) { m_recommendationsDisplayNameHasBeenSet = true; m_recommendationsDisplayName.assign(value); }
    inline RecommenderConfigurationResponse& WithRecommendationsDisplayName(const Aws::String& value) { SetRecommendationsDisplayName(value); return *this;}
    inline RecommenderConfigurationResponse& WithRecommendationsDisplayName(Aws::String&& value) { SetRecommendationsDisplayName(std::move(value)); return *this;}
    inline RecommenderConfigurationResponse& WithRecommendationsDisplayName(const char* value) { SetRecommendationsDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of recommended items that are retrieved from the model for each
     * endpoint or user, depending on the value for the RecommendationProviderIdType
     * property. This number determines how many recommended items are available for
     * use in message variables.</p>
     */
    inline int GetRecommendationsPerMessage() const{ return m_recommendationsPerMessage; }
    inline bool RecommendationsPerMessageHasBeenSet() const { return m_recommendationsPerMessageHasBeenSet; }
    inline void SetRecommendationsPerMessage(int value) { m_recommendationsPerMessageHasBeenSet = true; m_recommendationsPerMessage = value; }
    inline RecommenderConfigurationResponse& WithRecommendationsPerMessage(int value) { SetRecommendationsPerMessage(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_recommendationProviderIdType;
    bool m_recommendationProviderIdTypeHasBeenSet = false;

    Aws::String m_recommendationProviderRoleArn;
    bool m_recommendationProviderRoleArnHasBeenSet = false;

    Aws::String m_recommendationProviderUri;
    bool m_recommendationProviderUriHasBeenSet = false;

    Aws::String m_recommendationTransformerUri;
    bool m_recommendationTransformerUriHasBeenSet = false;

    Aws::String m_recommendationsDisplayName;
    bool m_recommendationsDisplayNameHasBeenSet = false;

    int m_recommendationsPerMessage;
    bool m_recommendationsPerMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
