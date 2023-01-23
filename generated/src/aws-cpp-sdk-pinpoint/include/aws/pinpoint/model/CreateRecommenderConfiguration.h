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
   * <p>Specifies Amazon Pinpoint configuration settings for retrieving and
   * processing recommendation data from a recommender model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateRecommenderConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateRecommenderConfiguration
  {
  public:
    AWS_PINPOINT_API CreateRecommenderConfiguration();
    AWS_PINPOINT_API CreateRecommenderConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API CreateRecommenderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A map of key-value pairs that defines 1-10 custom endpoint or user
     * attributes, depending on the value for the RecommendationProviderIdType
     * property. Each of these attributes temporarily stores a recommended item that's
     * retrieved from the recommender model and sent to an AWS Lambda function for
     * additional processing. Each attribute can be used as a message variable in a
     * message template.</p> <p>In the map, the key is the name of a custom attribute
     * and the value is a custom display name for that attribute. The display name
     * appears in the <b>Attribute finder</b> of the template editor on the Amazon
     * Pinpoint console. The following restrictions apply to these names:</p>
     * <ul><li><p>An attribute name must start with a letter or number and it can
     * contain up to 50 characters. The characters can be letters, numbers, underscores
     * (_), or hyphens (-). Attribute names are case sensitive and must be
     * unique.</p></li> <li><p>An attribute display name must start with a letter or
     * number and it can contain up to 25 characters. The characters can be letters,
     * numbers, spaces, underscores (_), or hyphens (-).</p></li></ul> <p>This object
     * is required if the configuration invokes an AWS Lambda function
     * (RecommendationTransformerUri) to process recommendation data. Otherwise, don't
     * include this object in your request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A map of key-value pairs that defines 1-10 custom endpoint or user
     * attributes, depending on the value for the RecommendationProviderIdType
     * property. Each of these attributes temporarily stores a recommended item that's
     * retrieved from the recommender model and sent to an AWS Lambda function for
     * additional processing. Each attribute can be used as a message variable in a
     * message template.</p> <p>In the map, the key is the name of a custom attribute
     * and the value is a custom display name for that attribute. The display name
     * appears in the <b>Attribute finder</b> of the template editor on the Amazon
     * Pinpoint console. The following restrictions apply to these names:</p>
     * <ul><li><p>An attribute name must start with a letter or number and it can
     * contain up to 50 characters. The characters can be letters, numbers, underscores
     * (_), or hyphens (-). Attribute names are case sensitive and must be
     * unique.</p></li> <li><p>An attribute display name must start with a letter or
     * number and it can contain up to 25 characters. The characters can be letters,
     * numbers, spaces, underscores (_), or hyphens (-).</p></li></ul> <p>This object
     * is required if the configuration invokes an AWS Lambda function
     * (RecommendationTransformerUri) to process recommendation data. Otherwise, don't
     * include this object in your request.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A map of key-value pairs that defines 1-10 custom endpoint or user
     * attributes, depending on the value for the RecommendationProviderIdType
     * property. Each of these attributes temporarily stores a recommended item that's
     * retrieved from the recommender model and sent to an AWS Lambda function for
     * additional processing. Each attribute can be used as a message variable in a
     * message template.</p> <p>In the map, the key is the name of a custom attribute
     * and the value is a custom display name for that attribute. The display name
     * appears in the <b>Attribute finder</b> of the template editor on the Amazon
     * Pinpoint console. The following restrictions apply to these names:</p>
     * <ul><li><p>An attribute name must start with a letter or number and it can
     * contain up to 50 characters. The characters can be letters, numbers, underscores
     * (_), or hyphens (-). Attribute names are case sensitive and must be
     * unique.</p></li> <li><p>An attribute display name must start with a letter or
     * number and it can contain up to 25 characters. The characters can be letters,
     * numbers, spaces, underscores (_), or hyphens (-).</p></li></ul> <p>This object
     * is required if the configuration invokes an AWS Lambda function
     * (RecommendationTransformerUri) to process recommendation data. Otherwise, don't
     * include this object in your request.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A map of key-value pairs that defines 1-10 custom endpoint or user
     * attributes, depending on the value for the RecommendationProviderIdType
     * property. Each of these attributes temporarily stores a recommended item that's
     * retrieved from the recommender model and sent to an AWS Lambda function for
     * additional processing. Each attribute can be used as a message variable in a
     * message template.</p> <p>In the map, the key is the name of a custom attribute
     * and the value is a custom display name for that attribute. The display name
     * appears in the <b>Attribute finder</b> of the template editor on the Amazon
     * Pinpoint console. The following restrictions apply to these names:</p>
     * <ul><li><p>An attribute name must start with a letter or number and it can
     * contain up to 50 characters. The characters can be letters, numbers, underscores
     * (_), or hyphens (-). Attribute names are case sensitive and must be
     * unique.</p></li> <li><p>An attribute display name must start with a letter or
     * number and it can contain up to 25 characters. The characters can be letters,
     * numbers, spaces, underscores (_), or hyphens (-).</p></li></ul> <p>This object
     * is required if the configuration invokes an AWS Lambda function
     * (RecommendationTransformerUri) to process recommendation data. Otherwise, don't
     * include this object in your request.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A map of key-value pairs that defines 1-10 custom endpoint or user
     * attributes, depending on the value for the RecommendationProviderIdType
     * property. Each of these attributes temporarily stores a recommended item that's
     * retrieved from the recommender model and sent to an AWS Lambda function for
     * additional processing. Each attribute can be used as a message variable in a
     * message template.</p> <p>In the map, the key is the name of a custom attribute
     * and the value is a custom display name for that attribute. The display name
     * appears in the <b>Attribute finder</b> of the template editor on the Amazon
     * Pinpoint console. The following restrictions apply to these names:</p>
     * <ul><li><p>An attribute name must start with a letter or number and it can
     * contain up to 50 characters. The characters can be letters, numbers, underscores
     * (_), or hyphens (-). Attribute names are case sensitive and must be
     * unique.</p></li> <li><p>An attribute display name must start with a letter or
     * number and it can contain up to 25 characters. The characters can be letters,
     * numbers, spaces, underscores (_), or hyphens (-).</p></li></ul> <p>This object
     * is required if the configuration invokes an AWS Lambda function
     * (RecommendationTransformerUri) to process recommendation data. Otherwise, don't
     * include this object in your request.</p>
     */
    inline CreateRecommenderConfiguration& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of key-value pairs that defines 1-10 custom endpoint or user
     * attributes, depending on the value for the RecommendationProviderIdType
     * property. Each of these attributes temporarily stores a recommended item that's
     * retrieved from the recommender model and sent to an AWS Lambda function for
     * additional processing. Each attribute can be used as a message variable in a
     * message template.</p> <p>In the map, the key is the name of a custom attribute
     * and the value is a custom display name for that attribute. The display name
     * appears in the <b>Attribute finder</b> of the template editor on the Amazon
     * Pinpoint console. The following restrictions apply to these names:</p>
     * <ul><li><p>An attribute name must start with a letter or number and it can
     * contain up to 50 characters. The characters can be letters, numbers, underscores
     * (_), or hyphens (-). Attribute names are case sensitive and must be
     * unique.</p></li> <li><p>An attribute display name must start with a letter or
     * number and it can contain up to 25 characters. The characters can be letters,
     * numbers, spaces, underscores (_), or hyphens (-).</p></li></ul> <p>This object
     * is required if the configuration invokes an AWS Lambda function
     * (RecommendationTransformerUri) to process recommendation data. Otherwise, don't
     * include this object in your request.</p>
     */
    inline CreateRecommenderConfiguration& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A map of key-value pairs that defines 1-10 custom endpoint or user
     * attributes, depending on the value for the RecommendationProviderIdType
     * property. Each of these attributes temporarily stores a recommended item that's
     * retrieved from the recommender model and sent to an AWS Lambda function for
     * additional processing. Each attribute can be used as a message variable in a
     * message template.</p> <p>In the map, the key is the name of a custom attribute
     * and the value is a custom display name for that attribute. The display name
     * appears in the <b>Attribute finder</b> of the template editor on the Amazon
     * Pinpoint console. The following restrictions apply to these names:</p>
     * <ul><li><p>An attribute name must start with a letter or number and it can
     * contain up to 50 characters. The characters can be letters, numbers, underscores
     * (_), or hyphens (-). Attribute names are case sensitive and must be
     * unique.</p></li> <li><p>An attribute display name must start with a letter or
     * number and it can contain up to 25 characters. The characters can be letters,
     * numbers, spaces, underscores (_), or hyphens (-).</p></li></ul> <p>This object
     * is required if the configuration invokes an AWS Lambda function
     * (RecommendationTransformerUri) to process recommendation data. Otherwise, don't
     * include this object in your request.</p>
     */
    inline CreateRecommenderConfiguration& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A map of key-value pairs that defines 1-10 custom endpoint or user
     * attributes, depending on the value for the RecommendationProviderIdType
     * property. Each of these attributes temporarily stores a recommended item that's
     * retrieved from the recommender model and sent to an AWS Lambda function for
     * additional processing. Each attribute can be used as a message variable in a
     * message template.</p> <p>In the map, the key is the name of a custom attribute
     * and the value is a custom display name for that attribute. The display name
     * appears in the <b>Attribute finder</b> of the template editor on the Amazon
     * Pinpoint console. The following restrictions apply to these names:</p>
     * <ul><li><p>An attribute name must start with a letter or number and it can
     * contain up to 50 characters. The characters can be letters, numbers, underscores
     * (_), or hyphens (-). Attribute names are case sensitive and must be
     * unique.</p></li> <li><p>An attribute display name must start with a letter or
     * number and it can contain up to 25 characters. The characters can be letters,
     * numbers, spaces, underscores (_), or hyphens (-).</p></li></ul> <p>This object
     * is required if the configuration invokes an AWS Lambda function
     * (RecommendationTransformerUri) to process recommendation data. Otherwise, don't
     * include this object in your request.</p>
     */
    inline CreateRecommenderConfiguration& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that defines 1-10 custom endpoint or user
     * attributes, depending on the value for the RecommendationProviderIdType
     * property. Each of these attributes temporarily stores a recommended item that's
     * retrieved from the recommender model and sent to an AWS Lambda function for
     * additional processing. Each attribute can be used as a message variable in a
     * message template.</p> <p>In the map, the key is the name of a custom attribute
     * and the value is a custom display name for that attribute. The display name
     * appears in the <b>Attribute finder</b> of the template editor on the Amazon
     * Pinpoint console. The following restrictions apply to these names:</p>
     * <ul><li><p>An attribute name must start with a letter or number and it can
     * contain up to 50 characters. The characters can be letters, numbers, underscores
     * (_), or hyphens (-). Attribute names are case sensitive and must be
     * unique.</p></li> <li><p>An attribute display name must start with a letter or
     * number and it can contain up to 25 characters. The characters can be letters,
     * numbers, spaces, underscores (_), or hyphens (-).</p></li></ul> <p>This object
     * is required if the configuration invokes an AWS Lambda function
     * (RecommendationTransformerUri) to process recommendation data. Otherwise, don't
     * include this object in your request.</p>
     */
    inline CreateRecommenderConfiguration& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that defines 1-10 custom endpoint or user
     * attributes, depending on the value for the RecommendationProviderIdType
     * property. Each of these attributes temporarily stores a recommended item that's
     * retrieved from the recommender model and sent to an AWS Lambda function for
     * additional processing. Each attribute can be used as a message variable in a
     * message template.</p> <p>In the map, the key is the name of a custom attribute
     * and the value is a custom display name for that attribute. The display name
     * appears in the <b>Attribute finder</b> of the template editor on the Amazon
     * Pinpoint console. The following restrictions apply to these names:</p>
     * <ul><li><p>An attribute name must start with a letter or number and it can
     * contain up to 50 characters. The characters can be letters, numbers, underscores
     * (_), or hyphens (-). Attribute names are case sensitive and must be
     * unique.</p></li> <li><p>An attribute display name must start with a letter or
     * number and it can contain up to 25 characters. The characters can be letters,
     * numbers, spaces, underscores (_), or hyphens (-).</p></li></ul> <p>This object
     * is required if the configuration invokes an AWS Lambda function
     * (RecommendationTransformerUri) to process recommendation data. Otherwise, don't
     * include this object in your request.</p>
     */
    inline CreateRecommenderConfiguration& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that defines 1-10 custom endpoint or user
     * attributes, depending on the value for the RecommendationProviderIdType
     * property. Each of these attributes temporarily stores a recommended item that's
     * retrieved from the recommender model and sent to an AWS Lambda function for
     * additional processing. Each attribute can be used as a message variable in a
     * message template.</p> <p>In the map, the key is the name of a custom attribute
     * and the value is a custom display name for that attribute. The display name
     * appears in the <b>Attribute finder</b> of the template editor on the Amazon
     * Pinpoint console. The following restrictions apply to these names:</p>
     * <ul><li><p>An attribute name must start with a letter or number and it can
     * contain up to 50 characters. The characters can be letters, numbers, underscores
     * (_), or hyphens (-). Attribute names are case sensitive and must be
     * unique.</p></li> <li><p>An attribute display name must start with a letter or
     * number and it can contain up to 25 characters. The characters can be letters,
     * numbers, spaces, underscores (_), or hyphens (-).</p></li></ul> <p>This object
     * is required if the configuration invokes an AWS Lambda function
     * (RecommendationTransformerUri) to process recommendation data. Otherwise, don't
     * include this object in your request.</p>
     */
    inline CreateRecommenderConfiguration& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that defines 1-10 custom endpoint or user
     * attributes, depending on the value for the RecommendationProviderIdType
     * property. Each of these attributes temporarily stores a recommended item that's
     * retrieved from the recommender model and sent to an AWS Lambda function for
     * additional processing. Each attribute can be used as a message variable in a
     * message template.</p> <p>In the map, the key is the name of a custom attribute
     * and the value is a custom display name for that attribute. The display name
     * appears in the <b>Attribute finder</b> of the template editor on the Amazon
     * Pinpoint console. The following restrictions apply to these names:</p>
     * <ul><li><p>An attribute name must start with a letter or number and it can
     * contain up to 50 characters. The characters can be letters, numbers, underscores
     * (_), or hyphens (-). Attribute names are case sensitive and must be
     * unique.</p></li> <li><p>An attribute display name must start with a letter or
     * number and it can contain up to 25 characters. The characters can be letters,
     * numbers, spaces, underscores (_), or hyphens (-).</p></li></ul> <p>This object
     * is required if the configuration invokes an AWS Lambda function
     * (RecommendationTransformerUri) to process recommendation data. Otherwise, don't
     * include this object in your request.</p>
     */
    inline CreateRecommenderConfiguration& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that defines 1-10 custom endpoint or user
     * attributes, depending on the value for the RecommendationProviderIdType
     * property. Each of these attributes temporarily stores a recommended item that's
     * retrieved from the recommender model and sent to an AWS Lambda function for
     * additional processing. Each attribute can be used as a message variable in a
     * message template.</p> <p>In the map, the key is the name of a custom attribute
     * and the value is a custom display name for that attribute. The display name
     * appears in the <b>Attribute finder</b> of the template editor on the Amazon
     * Pinpoint console. The following restrictions apply to these names:</p>
     * <ul><li><p>An attribute name must start with a letter or number and it can
     * contain up to 50 characters. The characters can be letters, numbers, underscores
     * (_), or hyphens (-). Attribute names are case sensitive and must be
     * unique.</p></li> <li><p>An attribute display name must start with a letter or
     * number and it can contain up to 25 characters. The characters can be letters,
     * numbers, spaces, underscores (_), or hyphens (-).</p></li></ul> <p>This object
     * is required if the configuration invokes an AWS Lambda function
     * (RecommendationTransformerUri) to process recommendation data. Otherwise, don't
     * include this object in your request.</p>
     */
    inline CreateRecommenderConfiguration& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>A custom description of the configuration for the recommender model. The
     * description can contain up to 128 characters. The characters can be letters,
     * numbers, spaces, or the following symbols: _ ; () , ‐.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A custom description of the configuration for the recommender model. The
     * description can contain up to 128 characters. The characters can be letters,
     * numbers, spaces, or the following symbols: _ ; () , ‐.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A custom description of the configuration for the recommender model. The
     * description can contain up to 128 characters. The characters can be letters,
     * numbers, spaces, or the following symbols: _ ; () , ‐.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A custom description of the configuration for the recommender model. The
     * description can contain up to 128 characters. The characters can be letters,
     * numbers, spaces, or the following symbols: _ ; () , ‐.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A custom description of the configuration for the recommender model. The
     * description can contain up to 128 characters. The characters can be letters,
     * numbers, spaces, or the following symbols: _ ; () , ‐.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A custom description of the configuration for the recommender model. The
     * description can contain up to 128 characters. The characters can be letters,
     * numbers, spaces, or the following symbols: _ ; () , ‐.</p>
     */
    inline CreateRecommenderConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A custom description of the configuration for the recommender model. The
     * description can contain up to 128 characters. The characters can be letters,
     * numbers, spaces, or the following symbols: _ ; () , ‐.</p>
     */
    inline CreateRecommenderConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A custom description of the configuration for the recommender model. The
     * description can contain up to 128 characters. The characters can be letters,
     * numbers, spaces, or the following symbols: _ ; () , ‐.</p>
     */
    inline CreateRecommenderConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A custom name of the configuration for the recommender model. The name must
     * start with a letter or number and it can contain up to 128 characters. The
     * characters can be letters, numbers, spaces, underscores (_), or hyphens (-).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A custom name of the configuration for the recommender model. The name must
     * start with a letter or number and it can contain up to 128 characters. The
     * characters can be letters, numbers, spaces, underscores (_), or hyphens (-).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A custom name of the configuration for the recommender model. The name must
     * start with a letter or number and it can contain up to 128 characters. The
     * characters can be letters, numbers, spaces, underscores (_), or hyphens (-).</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A custom name of the configuration for the recommender model. The name must
     * start with a letter or number and it can contain up to 128 characters. The
     * characters can be letters, numbers, spaces, underscores (_), or hyphens (-).</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A custom name of the configuration for the recommender model. The name must
     * start with a letter or number and it can contain up to 128 characters. The
     * characters can be letters, numbers, spaces, underscores (_), or hyphens (-).</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A custom name of the configuration for the recommender model. The name must
     * start with a letter or number and it can contain up to 128 characters. The
     * characters can be letters, numbers, spaces, underscores (_), or hyphens (-).</p>
     */
    inline CreateRecommenderConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A custom name of the configuration for the recommender model. The name must
     * start with a letter or number and it can contain up to 128 characters. The
     * characters can be letters, numbers, spaces, underscores (_), or hyphens (-).</p>
     */
    inline CreateRecommenderConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A custom name of the configuration for the recommender model. The name must
     * start with a letter or number and it can contain up to 128 characters. The
     * characters can be letters, numbers, spaces, underscores (_), or hyphens (-).</p>
     */
    inline CreateRecommenderConfiguration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of Amazon Pinpoint ID to associate with unique user IDs in the
     * recommender model. This value enables the model to use attribute and event data
     * that’s specific to a particular endpoint or user in an Amazon Pinpoint
     * application. Valid values are:</p> <ul><li><p>PINPOINT_ENDPOINT_ID - Associate
     * each user in the model with a particular endpoint in Amazon Pinpoint. The data
     * is correlated based on endpoint IDs in Amazon Pinpoint. This is the default
     * value.</p></li> <li><p>PINPOINT_USER_ID - Associate each user in the model with
     * a particular user and endpoint in Amazon Pinpoint. The data is correlated based
     * on user IDs in Amazon Pinpoint. If you specify this value, an endpoint
     * definition in Amazon Pinpoint has to specify both a user ID (UserId) and an
     * endpoint ID. Otherwise, messages won’t be sent to the user's
     * endpoint.</p></li></ul>
     */
    inline const Aws::String& GetRecommendationProviderIdType() const{ return m_recommendationProviderIdType; }

    /**
     * <p>The type of Amazon Pinpoint ID to associate with unique user IDs in the
     * recommender model. This value enables the model to use attribute and event data
     * that’s specific to a particular endpoint or user in an Amazon Pinpoint
     * application. Valid values are:</p> <ul><li><p>PINPOINT_ENDPOINT_ID - Associate
     * each user in the model with a particular endpoint in Amazon Pinpoint. The data
     * is correlated based on endpoint IDs in Amazon Pinpoint. This is the default
     * value.</p></li> <li><p>PINPOINT_USER_ID - Associate each user in the model with
     * a particular user and endpoint in Amazon Pinpoint. The data is correlated based
     * on user IDs in Amazon Pinpoint. If you specify this value, an endpoint
     * definition in Amazon Pinpoint has to specify both a user ID (UserId) and an
     * endpoint ID. Otherwise, messages won’t be sent to the user's
     * endpoint.</p></li></ul>
     */
    inline bool RecommendationProviderIdTypeHasBeenSet() const { return m_recommendationProviderIdTypeHasBeenSet; }

    /**
     * <p>The type of Amazon Pinpoint ID to associate with unique user IDs in the
     * recommender model. This value enables the model to use attribute and event data
     * that’s specific to a particular endpoint or user in an Amazon Pinpoint
     * application. Valid values are:</p> <ul><li><p>PINPOINT_ENDPOINT_ID - Associate
     * each user in the model with a particular endpoint in Amazon Pinpoint. The data
     * is correlated based on endpoint IDs in Amazon Pinpoint. This is the default
     * value.</p></li> <li><p>PINPOINT_USER_ID - Associate each user in the model with
     * a particular user and endpoint in Amazon Pinpoint. The data is correlated based
     * on user IDs in Amazon Pinpoint. If you specify this value, an endpoint
     * definition in Amazon Pinpoint has to specify both a user ID (UserId) and an
     * endpoint ID. Otherwise, messages won’t be sent to the user's
     * endpoint.</p></li></ul>
     */
    inline void SetRecommendationProviderIdType(const Aws::String& value) { m_recommendationProviderIdTypeHasBeenSet = true; m_recommendationProviderIdType = value; }

    /**
     * <p>The type of Amazon Pinpoint ID to associate with unique user IDs in the
     * recommender model. This value enables the model to use attribute and event data
     * that’s specific to a particular endpoint or user in an Amazon Pinpoint
     * application. Valid values are:</p> <ul><li><p>PINPOINT_ENDPOINT_ID - Associate
     * each user in the model with a particular endpoint in Amazon Pinpoint. The data
     * is correlated based on endpoint IDs in Amazon Pinpoint. This is the default
     * value.</p></li> <li><p>PINPOINT_USER_ID - Associate each user in the model with
     * a particular user and endpoint in Amazon Pinpoint. The data is correlated based
     * on user IDs in Amazon Pinpoint. If you specify this value, an endpoint
     * definition in Amazon Pinpoint has to specify both a user ID (UserId) and an
     * endpoint ID. Otherwise, messages won’t be sent to the user's
     * endpoint.</p></li></ul>
     */
    inline void SetRecommendationProviderIdType(Aws::String&& value) { m_recommendationProviderIdTypeHasBeenSet = true; m_recommendationProviderIdType = std::move(value); }

    /**
     * <p>The type of Amazon Pinpoint ID to associate with unique user IDs in the
     * recommender model. This value enables the model to use attribute and event data
     * that’s specific to a particular endpoint or user in an Amazon Pinpoint
     * application. Valid values are:</p> <ul><li><p>PINPOINT_ENDPOINT_ID - Associate
     * each user in the model with a particular endpoint in Amazon Pinpoint. The data
     * is correlated based on endpoint IDs in Amazon Pinpoint. This is the default
     * value.</p></li> <li><p>PINPOINT_USER_ID - Associate each user in the model with
     * a particular user and endpoint in Amazon Pinpoint. The data is correlated based
     * on user IDs in Amazon Pinpoint. If you specify this value, an endpoint
     * definition in Amazon Pinpoint has to specify both a user ID (UserId) and an
     * endpoint ID. Otherwise, messages won’t be sent to the user's
     * endpoint.</p></li></ul>
     */
    inline void SetRecommendationProviderIdType(const char* value) { m_recommendationProviderIdTypeHasBeenSet = true; m_recommendationProviderIdType.assign(value); }

    /**
     * <p>The type of Amazon Pinpoint ID to associate with unique user IDs in the
     * recommender model. This value enables the model to use attribute and event data
     * that’s specific to a particular endpoint or user in an Amazon Pinpoint
     * application. Valid values are:</p> <ul><li><p>PINPOINT_ENDPOINT_ID - Associate
     * each user in the model with a particular endpoint in Amazon Pinpoint. The data
     * is correlated based on endpoint IDs in Amazon Pinpoint. This is the default
     * value.</p></li> <li><p>PINPOINT_USER_ID - Associate each user in the model with
     * a particular user and endpoint in Amazon Pinpoint. The data is correlated based
     * on user IDs in Amazon Pinpoint. If you specify this value, an endpoint
     * definition in Amazon Pinpoint has to specify both a user ID (UserId) and an
     * endpoint ID. Otherwise, messages won’t be sent to the user's
     * endpoint.</p></li></ul>
     */
    inline CreateRecommenderConfiguration& WithRecommendationProviderIdType(const Aws::String& value) { SetRecommendationProviderIdType(value); return *this;}

    /**
     * <p>The type of Amazon Pinpoint ID to associate with unique user IDs in the
     * recommender model. This value enables the model to use attribute and event data
     * that’s specific to a particular endpoint or user in an Amazon Pinpoint
     * application. Valid values are:</p> <ul><li><p>PINPOINT_ENDPOINT_ID - Associate
     * each user in the model with a particular endpoint in Amazon Pinpoint. The data
     * is correlated based on endpoint IDs in Amazon Pinpoint. This is the default
     * value.</p></li> <li><p>PINPOINT_USER_ID - Associate each user in the model with
     * a particular user and endpoint in Amazon Pinpoint. The data is correlated based
     * on user IDs in Amazon Pinpoint. If you specify this value, an endpoint
     * definition in Amazon Pinpoint has to specify both a user ID (UserId) and an
     * endpoint ID. Otherwise, messages won’t be sent to the user's
     * endpoint.</p></li></ul>
     */
    inline CreateRecommenderConfiguration& WithRecommendationProviderIdType(Aws::String&& value) { SetRecommendationProviderIdType(std::move(value)); return *this;}

    /**
     * <p>The type of Amazon Pinpoint ID to associate with unique user IDs in the
     * recommender model. This value enables the model to use attribute and event data
     * that’s specific to a particular endpoint or user in an Amazon Pinpoint
     * application. Valid values are:</p> <ul><li><p>PINPOINT_ENDPOINT_ID - Associate
     * each user in the model with a particular endpoint in Amazon Pinpoint. The data
     * is correlated based on endpoint IDs in Amazon Pinpoint. This is the default
     * value.</p></li> <li><p>PINPOINT_USER_ID - Associate each user in the model with
     * a particular user and endpoint in Amazon Pinpoint. The data is correlated based
     * on user IDs in Amazon Pinpoint. If you specify this value, an endpoint
     * definition in Amazon Pinpoint has to specify both a user ID (UserId) and an
     * endpoint ID. Otherwise, messages won’t be sent to the user's
     * endpoint.</p></li></ul>
     */
    inline CreateRecommenderConfiguration& WithRecommendationProviderIdType(const char* value) { SetRecommendationProviderIdType(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to retrieve recommendation data from
     * the recommender model.</p>
     */
    inline const Aws::String& GetRecommendationProviderRoleArn() const{ return m_recommendationProviderRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to retrieve recommendation data from
     * the recommender model.</p>
     */
    inline bool RecommendationProviderRoleArnHasBeenSet() const { return m_recommendationProviderRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to retrieve recommendation data from
     * the recommender model.</p>
     */
    inline void SetRecommendationProviderRoleArn(const Aws::String& value) { m_recommendationProviderRoleArnHasBeenSet = true; m_recommendationProviderRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to retrieve recommendation data from
     * the recommender model.</p>
     */
    inline void SetRecommendationProviderRoleArn(Aws::String&& value) { m_recommendationProviderRoleArnHasBeenSet = true; m_recommendationProviderRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to retrieve recommendation data from
     * the recommender model.</p>
     */
    inline void SetRecommendationProviderRoleArn(const char* value) { m_recommendationProviderRoleArnHasBeenSet = true; m_recommendationProviderRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to retrieve recommendation data from
     * the recommender model.</p>
     */
    inline CreateRecommenderConfiguration& WithRecommendationProviderRoleArn(const Aws::String& value) { SetRecommendationProviderRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to retrieve recommendation data from
     * the recommender model.</p>
     */
    inline CreateRecommenderConfiguration& WithRecommendationProviderRoleArn(Aws::String&& value) { SetRecommendationProviderRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to retrieve recommendation data from
     * the recommender model.</p>
     */
    inline CreateRecommenderConfiguration& WithRecommendationProviderRoleArn(const char* value) { SetRecommendationProviderRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the recommender model to retrieve
     * recommendation data from. This value must match the ARN of an Amazon Personalize
     * campaign.</p>
     */
    inline const Aws::String& GetRecommendationProviderUri() const{ return m_recommendationProviderUri; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender model to retrieve
     * recommendation data from. This value must match the ARN of an Amazon Personalize
     * campaign.</p>
     */
    inline bool RecommendationProviderUriHasBeenSet() const { return m_recommendationProviderUriHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender model to retrieve
     * recommendation data from. This value must match the ARN of an Amazon Personalize
     * campaign.</p>
     */
    inline void SetRecommendationProviderUri(const Aws::String& value) { m_recommendationProviderUriHasBeenSet = true; m_recommendationProviderUri = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender model to retrieve
     * recommendation data from. This value must match the ARN of an Amazon Personalize
     * campaign.</p>
     */
    inline void SetRecommendationProviderUri(Aws::String&& value) { m_recommendationProviderUriHasBeenSet = true; m_recommendationProviderUri = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender model to retrieve
     * recommendation data from. This value must match the ARN of an Amazon Personalize
     * campaign.</p>
     */
    inline void SetRecommendationProviderUri(const char* value) { m_recommendationProviderUriHasBeenSet = true; m_recommendationProviderUri.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender model to retrieve
     * recommendation data from. This value must match the ARN of an Amazon Personalize
     * campaign.</p>
     */
    inline CreateRecommenderConfiguration& WithRecommendationProviderUri(const Aws::String& value) { SetRecommendationProviderUri(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender model to retrieve
     * recommendation data from. This value must match the ARN of an Amazon Personalize
     * campaign.</p>
     */
    inline CreateRecommenderConfiguration& WithRecommendationProviderUri(Aws::String&& value) { SetRecommendationProviderUri(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender model to retrieve
     * recommendation data from. This value must match the ARN of an Amazon Personalize
     * campaign.</p>
     */
    inline CreateRecommenderConfiguration& WithRecommendationProviderUri(const char* value) { SetRecommendationProviderUri(value); return *this;}


    /**
     * <p>The name or Amazon Resource Name (ARN) of the AWS Lambda function to invoke
     * for additional processing of recommendation data that's retrieved from the
     * recommender model.</p>
     */
    inline const Aws::String& GetRecommendationTransformerUri() const{ return m_recommendationTransformerUri; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the AWS Lambda function to invoke
     * for additional processing of recommendation data that's retrieved from the
     * recommender model.</p>
     */
    inline bool RecommendationTransformerUriHasBeenSet() const { return m_recommendationTransformerUriHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the AWS Lambda function to invoke
     * for additional processing of recommendation data that's retrieved from the
     * recommender model.</p>
     */
    inline void SetRecommendationTransformerUri(const Aws::String& value) { m_recommendationTransformerUriHasBeenSet = true; m_recommendationTransformerUri = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the AWS Lambda function to invoke
     * for additional processing of recommendation data that's retrieved from the
     * recommender model.</p>
     */
    inline void SetRecommendationTransformerUri(Aws::String&& value) { m_recommendationTransformerUriHasBeenSet = true; m_recommendationTransformerUri = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the AWS Lambda function to invoke
     * for additional processing of recommendation data that's retrieved from the
     * recommender model.</p>
     */
    inline void SetRecommendationTransformerUri(const char* value) { m_recommendationTransformerUriHasBeenSet = true; m_recommendationTransformerUri.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the AWS Lambda function to invoke
     * for additional processing of recommendation data that's retrieved from the
     * recommender model.</p>
     */
    inline CreateRecommenderConfiguration& WithRecommendationTransformerUri(const Aws::String& value) { SetRecommendationTransformerUri(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the AWS Lambda function to invoke
     * for additional processing of recommendation data that's retrieved from the
     * recommender model.</p>
     */
    inline CreateRecommenderConfiguration& WithRecommendationTransformerUri(Aws::String&& value) { SetRecommendationTransformerUri(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the AWS Lambda function to invoke
     * for additional processing of recommendation data that's retrieved from the
     * recommender model.</p>
     */
    inline CreateRecommenderConfiguration& WithRecommendationTransformerUri(const char* value) { SetRecommendationTransformerUri(value); return *this;}


    /**
     * <p>A custom display name for the standard endpoint or user attribute
     * (RecommendationItems) that temporarily stores recommended items for each
     * endpoint or user, depending on the value for the RecommendationProviderIdType
     * property. This value is required if the configuration doesn't invoke an AWS
     * Lambda function (RecommendationTransformerUri) to perform additional processing
     * of recommendation data.</p> <p>This name appears in the <b>Attribute finder</b>
     * of the template editor on the Amazon Pinpoint console. The name can contain up
     * to 25 characters. The characters can be letters, numbers, spaces, underscores
     * (_), or hyphens (-). These restrictions don't apply to attribute values.</p>
     */
    inline const Aws::String& GetRecommendationsDisplayName() const{ return m_recommendationsDisplayName; }

    /**
     * <p>A custom display name for the standard endpoint or user attribute
     * (RecommendationItems) that temporarily stores recommended items for each
     * endpoint or user, depending on the value for the RecommendationProviderIdType
     * property. This value is required if the configuration doesn't invoke an AWS
     * Lambda function (RecommendationTransformerUri) to perform additional processing
     * of recommendation data.</p> <p>This name appears in the <b>Attribute finder</b>
     * of the template editor on the Amazon Pinpoint console. The name can contain up
     * to 25 characters. The characters can be letters, numbers, spaces, underscores
     * (_), or hyphens (-). These restrictions don't apply to attribute values.</p>
     */
    inline bool RecommendationsDisplayNameHasBeenSet() const { return m_recommendationsDisplayNameHasBeenSet; }

    /**
     * <p>A custom display name for the standard endpoint or user attribute
     * (RecommendationItems) that temporarily stores recommended items for each
     * endpoint or user, depending on the value for the RecommendationProviderIdType
     * property. This value is required if the configuration doesn't invoke an AWS
     * Lambda function (RecommendationTransformerUri) to perform additional processing
     * of recommendation data.</p> <p>This name appears in the <b>Attribute finder</b>
     * of the template editor on the Amazon Pinpoint console. The name can contain up
     * to 25 characters. The characters can be letters, numbers, spaces, underscores
     * (_), or hyphens (-). These restrictions don't apply to attribute values.</p>
     */
    inline void SetRecommendationsDisplayName(const Aws::String& value) { m_recommendationsDisplayNameHasBeenSet = true; m_recommendationsDisplayName = value; }

    /**
     * <p>A custom display name for the standard endpoint or user attribute
     * (RecommendationItems) that temporarily stores recommended items for each
     * endpoint or user, depending on the value for the RecommendationProviderIdType
     * property. This value is required if the configuration doesn't invoke an AWS
     * Lambda function (RecommendationTransformerUri) to perform additional processing
     * of recommendation data.</p> <p>This name appears in the <b>Attribute finder</b>
     * of the template editor on the Amazon Pinpoint console. The name can contain up
     * to 25 characters. The characters can be letters, numbers, spaces, underscores
     * (_), or hyphens (-). These restrictions don't apply to attribute values.</p>
     */
    inline void SetRecommendationsDisplayName(Aws::String&& value) { m_recommendationsDisplayNameHasBeenSet = true; m_recommendationsDisplayName = std::move(value); }

    /**
     * <p>A custom display name for the standard endpoint or user attribute
     * (RecommendationItems) that temporarily stores recommended items for each
     * endpoint or user, depending on the value for the RecommendationProviderIdType
     * property. This value is required if the configuration doesn't invoke an AWS
     * Lambda function (RecommendationTransformerUri) to perform additional processing
     * of recommendation data.</p> <p>This name appears in the <b>Attribute finder</b>
     * of the template editor on the Amazon Pinpoint console. The name can contain up
     * to 25 characters. The characters can be letters, numbers, spaces, underscores
     * (_), or hyphens (-). These restrictions don't apply to attribute values.</p>
     */
    inline void SetRecommendationsDisplayName(const char* value) { m_recommendationsDisplayNameHasBeenSet = true; m_recommendationsDisplayName.assign(value); }

    /**
     * <p>A custom display name for the standard endpoint or user attribute
     * (RecommendationItems) that temporarily stores recommended items for each
     * endpoint or user, depending on the value for the RecommendationProviderIdType
     * property. This value is required if the configuration doesn't invoke an AWS
     * Lambda function (RecommendationTransformerUri) to perform additional processing
     * of recommendation data.</p> <p>This name appears in the <b>Attribute finder</b>
     * of the template editor on the Amazon Pinpoint console. The name can contain up
     * to 25 characters. The characters can be letters, numbers, spaces, underscores
     * (_), or hyphens (-). These restrictions don't apply to attribute values.</p>
     */
    inline CreateRecommenderConfiguration& WithRecommendationsDisplayName(const Aws::String& value) { SetRecommendationsDisplayName(value); return *this;}

    /**
     * <p>A custom display name for the standard endpoint or user attribute
     * (RecommendationItems) that temporarily stores recommended items for each
     * endpoint or user, depending on the value for the RecommendationProviderIdType
     * property. This value is required if the configuration doesn't invoke an AWS
     * Lambda function (RecommendationTransformerUri) to perform additional processing
     * of recommendation data.</p> <p>This name appears in the <b>Attribute finder</b>
     * of the template editor on the Amazon Pinpoint console. The name can contain up
     * to 25 characters. The characters can be letters, numbers, spaces, underscores
     * (_), or hyphens (-). These restrictions don't apply to attribute values.</p>
     */
    inline CreateRecommenderConfiguration& WithRecommendationsDisplayName(Aws::String&& value) { SetRecommendationsDisplayName(std::move(value)); return *this;}

    /**
     * <p>A custom display name for the standard endpoint or user attribute
     * (RecommendationItems) that temporarily stores recommended items for each
     * endpoint or user, depending on the value for the RecommendationProviderIdType
     * property. This value is required if the configuration doesn't invoke an AWS
     * Lambda function (RecommendationTransformerUri) to perform additional processing
     * of recommendation data.</p> <p>This name appears in the <b>Attribute finder</b>
     * of the template editor on the Amazon Pinpoint console. The name can contain up
     * to 25 characters. The characters can be letters, numbers, spaces, underscores
     * (_), or hyphens (-). These restrictions don't apply to attribute values.</p>
     */
    inline CreateRecommenderConfiguration& WithRecommendationsDisplayName(const char* value) { SetRecommendationsDisplayName(value); return *this;}


    /**
     * <p>The number of recommended items to retrieve from the model for each endpoint
     * or user, depending on the value for the RecommendationProviderIdType property.
     * This number determines how many recommended items are available for use in
     * message variables. The minimum value is 1. The maximum value is 5. The default
     * value is 5.</p> <p>To use multiple recommended items and custom attributes with
     * message variables, you have to use an AWS Lambda function
     * (RecommendationTransformerUri) to perform additional processing of
     * recommendation data.</p>
     */
    inline int GetRecommendationsPerMessage() const{ return m_recommendationsPerMessage; }

    /**
     * <p>The number of recommended items to retrieve from the model for each endpoint
     * or user, depending on the value for the RecommendationProviderIdType property.
     * This number determines how many recommended items are available for use in
     * message variables. The minimum value is 1. The maximum value is 5. The default
     * value is 5.</p> <p>To use multiple recommended items and custom attributes with
     * message variables, you have to use an AWS Lambda function
     * (RecommendationTransformerUri) to perform additional processing of
     * recommendation data.</p>
     */
    inline bool RecommendationsPerMessageHasBeenSet() const { return m_recommendationsPerMessageHasBeenSet; }

    /**
     * <p>The number of recommended items to retrieve from the model for each endpoint
     * or user, depending on the value for the RecommendationProviderIdType property.
     * This number determines how many recommended items are available for use in
     * message variables. The minimum value is 1. The maximum value is 5. The default
     * value is 5.</p> <p>To use multiple recommended items and custom attributes with
     * message variables, you have to use an AWS Lambda function
     * (RecommendationTransformerUri) to perform additional processing of
     * recommendation data.</p>
     */
    inline void SetRecommendationsPerMessage(int value) { m_recommendationsPerMessageHasBeenSet = true; m_recommendationsPerMessage = value; }

    /**
     * <p>The number of recommended items to retrieve from the model for each endpoint
     * or user, depending on the value for the RecommendationProviderIdType property.
     * This number determines how many recommended items are available for use in
     * message variables. The minimum value is 1. The maximum value is 5. The default
     * value is 5.</p> <p>To use multiple recommended items and custom attributes with
     * message variables, you have to use an AWS Lambda function
     * (RecommendationTransformerUri) to perform additional processing of
     * recommendation data.</p>
     */
    inline CreateRecommenderConfiguration& WithRecommendationsPerMessage(int value) { SetRecommendationsPerMessage(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

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
