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
    AWS_PINPOINT_API RecommenderConfigurationResponse() = default;
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
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    RecommenderConfigurationResponse& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    RecommenderConfigurationResponse& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The date, in extended ISO 8601 format, when the configuration was created for
     * the recommender model.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    RecommenderConfigurationResponse& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom description of the configuration for the recommender model.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RecommenderConfigurationResponse& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the recommender model configuration.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    RecommenderConfigurationResponse& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in extended ISO 8601 format, when the configuration for the
     * recommender model was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::String>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::String>
    RecommenderConfigurationResponse& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom name of the configuration for the recommender model.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RecommenderConfigurationResponse& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    inline const Aws::String& GetRecommendationProviderIdType() const { return m_recommendationProviderIdType; }
    inline bool RecommendationProviderIdTypeHasBeenSet() const { return m_recommendationProviderIdTypeHasBeenSet; }
    template<typename RecommendationProviderIdTypeT = Aws::String>
    void SetRecommendationProviderIdType(RecommendationProviderIdTypeT&& value) { m_recommendationProviderIdTypeHasBeenSet = true; m_recommendationProviderIdType = std::forward<RecommendationProviderIdTypeT>(value); }
    template<typename RecommendationProviderIdTypeT = Aws::String>
    RecommenderConfigurationResponse& WithRecommendationProviderIdType(RecommendationProviderIdTypeT&& value) { SetRecommendationProviderIdType(std::forward<RecommendationProviderIdTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to retrieve recommendation data from
     * the recommender model.</p>
     */
    inline const Aws::String& GetRecommendationProviderRoleArn() const { return m_recommendationProviderRoleArn; }
    inline bool RecommendationProviderRoleArnHasBeenSet() const { return m_recommendationProviderRoleArnHasBeenSet; }
    template<typename RecommendationProviderRoleArnT = Aws::String>
    void SetRecommendationProviderRoleArn(RecommendationProviderRoleArnT&& value) { m_recommendationProviderRoleArnHasBeenSet = true; m_recommendationProviderRoleArn = std::forward<RecommendationProviderRoleArnT>(value); }
    template<typename RecommendationProviderRoleArnT = Aws::String>
    RecommenderConfigurationResponse& WithRecommendationProviderRoleArn(RecommendationProviderRoleArnT&& value) { SetRecommendationProviderRoleArn(std::forward<RecommendationProviderRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the recommender model that Amazon Pinpoint
     * retrieves the recommendation data from. This value is the ARN of an Amazon
     * Personalize campaign.</p>
     */
    inline const Aws::String& GetRecommendationProviderUri() const { return m_recommendationProviderUri; }
    inline bool RecommendationProviderUriHasBeenSet() const { return m_recommendationProviderUriHasBeenSet; }
    template<typename RecommendationProviderUriT = Aws::String>
    void SetRecommendationProviderUri(RecommendationProviderUriT&& value) { m_recommendationProviderUriHasBeenSet = true; m_recommendationProviderUri = std::forward<RecommendationProviderUriT>(value); }
    template<typename RecommendationProviderUriT = Aws::String>
    RecommenderConfigurationResponse& WithRecommendationProviderUri(RecommendationProviderUriT&& value) { SetRecommendationProviderUri(std::forward<RecommendationProviderUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the AWS Lambda function that Amazon
     * Pinpoint invokes to perform additional processing of recommendation data that it
     * retrieves from the recommender model.</p>
     */
    inline const Aws::String& GetRecommendationTransformerUri() const { return m_recommendationTransformerUri; }
    inline bool RecommendationTransformerUriHasBeenSet() const { return m_recommendationTransformerUriHasBeenSet; }
    template<typename RecommendationTransformerUriT = Aws::String>
    void SetRecommendationTransformerUri(RecommendationTransformerUriT&& value) { m_recommendationTransformerUriHasBeenSet = true; m_recommendationTransformerUri = std::forward<RecommendationTransformerUriT>(value); }
    template<typename RecommendationTransformerUriT = Aws::String>
    RecommenderConfigurationResponse& WithRecommendationTransformerUri(RecommendationTransformerUriT&& value) { SetRecommendationTransformerUri(std::forward<RecommendationTransformerUriT>(value)); return *this;}
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
    inline const Aws::String& GetRecommendationsDisplayName() const { return m_recommendationsDisplayName; }
    inline bool RecommendationsDisplayNameHasBeenSet() const { return m_recommendationsDisplayNameHasBeenSet; }
    template<typename RecommendationsDisplayNameT = Aws::String>
    void SetRecommendationsDisplayName(RecommendationsDisplayNameT&& value) { m_recommendationsDisplayNameHasBeenSet = true; m_recommendationsDisplayName = std::forward<RecommendationsDisplayNameT>(value); }
    template<typename RecommendationsDisplayNameT = Aws::String>
    RecommenderConfigurationResponse& WithRecommendationsDisplayName(RecommendationsDisplayNameT&& value) { SetRecommendationsDisplayName(std::forward<RecommendationsDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of recommended items that are retrieved from the model for each
     * endpoint or user, depending on the value for the RecommendationProviderIdType
     * property. This number determines how many recommended items are available for
     * use in message variables.</p>
     */
    inline int GetRecommendationsPerMessage() const { return m_recommendationsPerMessage; }
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

    int m_recommendationsPerMessage{0};
    bool m_recommendationsPerMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
