/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/QuickResponseContents.h>
#include <aws/core/utils/DateTime.h>
#include <aws/wisdom/model/GroupingConfiguration.h>
#include <aws/wisdom/model/QuickResponseStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>The result of quick response search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/QuickResponseSearchResultData">AWS
   * API Reference</a></p>
   */
  class QuickResponseSearchResultData
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API QuickResponseSearchResultData();
    AWS_CONNECTWISDOMSERVICE_API QuickResponseSearchResultData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API QuickResponseSearchResultData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user defined contact attributes that are resolved when the search result
     * is returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributesInterpolated() const{ return m_attributesInterpolated; }

    /**
     * <p>The user defined contact attributes that are resolved when the search result
     * is returned.</p>
     */
    inline bool AttributesInterpolatedHasBeenSet() const { return m_attributesInterpolatedHasBeenSet; }

    /**
     * <p>The user defined contact attributes that are resolved when the search result
     * is returned.</p>
     */
    inline void SetAttributesInterpolated(const Aws::Vector<Aws::String>& value) { m_attributesInterpolatedHasBeenSet = true; m_attributesInterpolated = value; }

    /**
     * <p>The user defined contact attributes that are resolved when the search result
     * is returned.</p>
     */
    inline void SetAttributesInterpolated(Aws::Vector<Aws::String>&& value) { m_attributesInterpolatedHasBeenSet = true; m_attributesInterpolated = std::move(value); }

    /**
     * <p>The user defined contact attributes that are resolved when the search result
     * is returned.</p>
     */
    inline QuickResponseSearchResultData& WithAttributesInterpolated(const Aws::Vector<Aws::String>& value) { SetAttributesInterpolated(value); return *this;}

    /**
     * <p>The user defined contact attributes that are resolved when the search result
     * is returned.</p>
     */
    inline QuickResponseSearchResultData& WithAttributesInterpolated(Aws::Vector<Aws::String>&& value) { SetAttributesInterpolated(std::move(value)); return *this;}

    /**
     * <p>The user defined contact attributes that are resolved when the search result
     * is returned.</p>
     */
    inline QuickResponseSearchResultData& AddAttributesInterpolated(const Aws::String& value) { m_attributesInterpolatedHasBeenSet = true; m_attributesInterpolated.push_back(value); return *this; }

    /**
     * <p>The user defined contact attributes that are resolved when the search result
     * is returned.</p>
     */
    inline QuickResponseSearchResultData& AddAttributesInterpolated(Aws::String&& value) { m_attributesInterpolatedHasBeenSet = true; m_attributesInterpolated.push_back(std::move(value)); return *this; }

    /**
     * <p>The user defined contact attributes that are resolved when the search result
     * is returned.</p>
     */
    inline QuickResponseSearchResultData& AddAttributesInterpolated(const char* value) { m_attributesInterpolatedHasBeenSet = true; m_attributesInterpolated.push_back(value); return *this; }


    /**
     * <p>The user defined contact attributes that are not resolved when the search
     * result is returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributesNotInterpolated() const{ return m_attributesNotInterpolated; }

    /**
     * <p>The user defined contact attributes that are not resolved when the search
     * result is returned.</p>
     */
    inline bool AttributesNotInterpolatedHasBeenSet() const { return m_attributesNotInterpolatedHasBeenSet; }

    /**
     * <p>The user defined contact attributes that are not resolved when the search
     * result is returned.</p>
     */
    inline void SetAttributesNotInterpolated(const Aws::Vector<Aws::String>& value) { m_attributesNotInterpolatedHasBeenSet = true; m_attributesNotInterpolated = value; }

    /**
     * <p>The user defined contact attributes that are not resolved when the search
     * result is returned.</p>
     */
    inline void SetAttributesNotInterpolated(Aws::Vector<Aws::String>&& value) { m_attributesNotInterpolatedHasBeenSet = true; m_attributesNotInterpolated = std::move(value); }

    /**
     * <p>The user defined contact attributes that are not resolved when the search
     * result is returned.</p>
     */
    inline QuickResponseSearchResultData& WithAttributesNotInterpolated(const Aws::Vector<Aws::String>& value) { SetAttributesNotInterpolated(value); return *this;}

    /**
     * <p>The user defined contact attributes that are not resolved when the search
     * result is returned.</p>
     */
    inline QuickResponseSearchResultData& WithAttributesNotInterpolated(Aws::Vector<Aws::String>&& value) { SetAttributesNotInterpolated(std::move(value)); return *this;}

    /**
     * <p>The user defined contact attributes that are not resolved when the search
     * result is returned.</p>
     */
    inline QuickResponseSearchResultData& AddAttributesNotInterpolated(const Aws::String& value) { m_attributesNotInterpolatedHasBeenSet = true; m_attributesNotInterpolated.push_back(value); return *this; }

    /**
     * <p>The user defined contact attributes that are not resolved when the search
     * result is returned.</p>
     */
    inline QuickResponseSearchResultData& AddAttributesNotInterpolated(Aws::String&& value) { m_attributesNotInterpolatedHasBeenSet = true; m_attributesNotInterpolated.push_back(std::move(value)); return *this; }

    /**
     * <p>The user defined contact attributes that are not resolved when the search
     * result is returned.</p>
     */
    inline QuickResponseSearchResultData& AddAttributesNotInterpolated(const char* value) { m_attributesNotInterpolatedHasBeenSet = true; m_attributesNotInterpolated.push_back(value); return *this; }


    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetChannels() const{ return m_channels; }

    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }

    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline void SetChannels(const Aws::Vector<Aws::String>& value) { m_channelsHasBeenSet = true; m_channels = value; }

    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline void SetChannels(Aws::Vector<Aws::String>&& value) { m_channelsHasBeenSet = true; m_channels = std::move(value); }

    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline QuickResponseSearchResultData& WithChannels(const Aws::Vector<Aws::String>& value) { SetChannels(value); return *this;}

    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline QuickResponseSearchResultData& WithChannels(Aws::Vector<Aws::String>&& value) { SetChannels(std::move(value)); return *this;}

    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline QuickResponseSearchResultData& AddChannels(const Aws::String& value) { m_channelsHasBeenSet = true; m_channels.push_back(value); return *this; }

    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline QuickResponseSearchResultData& AddChannels(Aws::String&& value) { m_channelsHasBeenSet = true; m_channels.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline QuickResponseSearchResultData& AddChannels(const char* value) { m_channelsHasBeenSet = true; m_channels.push_back(value); return *this; }


    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for quick response written
     * in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for quick response
     * written in richtext.</p> </li> </ul>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for quick response written
     * in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for quick response
     * written in richtext.</p> </li> </ul>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for quick response written
     * in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for quick response
     * written in richtext.</p> </li> </ul>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for quick response written
     * in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for quick response
     * written in richtext.</p> </li> </ul>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for quick response written
     * in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for quick response
     * written in richtext.</p> </li> </ul>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for quick response written
     * in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for quick response
     * written in richtext.</p> </li> </ul>
     */
    inline QuickResponseSearchResultData& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for quick response written
     * in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for quick response
     * written in richtext.</p> </li> </ul>
     */
    inline QuickResponseSearchResultData& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for quick response written
     * in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for quick response
     * written in richtext.</p> </li> </ul>
     */
    inline QuickResponseSearchResultData& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The contents of the quick response.</p>
     */
    inline const QuickResponseContents& GetContents() const{ return m_contents; }

    /**
     * <p>The contents of the quick response.</p>
     */
    inline bool ContentsHasBeenSet() const { return m_contentsHasBeenSet; }

    /**
     * <p>The contents of the quick response.</p>
     */
    inline void SetContents(const QuickResponseContents& value) { m_contentsHasBeenSet = true; m_contents = value; }

    /**
     * <p>The contents of the quick response.</p>
     */
    inline void SetContents(QuickResponseContents&& value) { m_contentsHasBeenSet = true; m_contents = std::move(value); }

    /**
     * <p>The contents of the quick response.</p>
     */
    inline QuickResponseSearchResultData& WithContents(const QuickResponseContents& value) { SetContents(value); return *this;}

    /**
     * <p>The contents of the quick response.</p>
     */
    inline QuickResponseSearchResultData& WithContents(QuickResponseContents&& value) { SetContents(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the quick response was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The timestamp when the quick response was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The timestamp when the quick response was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The timestamp when the quick response was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The timestamp when the quick response was created.</p>
     */
    inline QuickResponseSearchResultData& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The timestamp when the quick response was created.</p>
     */
    inline QuickResponseSearchResultData& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The description of the quick response.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the quick response.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the quick response.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the quick response.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the quick response.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the quick response.</p>
     */
    inline QuickResponseSearchResultData& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the quick response.</p>
     */
    inline QuickResponseSearchResultData& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the quick response.</p>
     */
    inline QuickResponseSearchResultData& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The configuration information of the user groups that the quick response is
     * accessible to.</p>
     */
    inline const GroupingConfiguration& GetGroupingConfiguration() const{ return m_groupingConfiguration; }

    /**
     * <p>The configuration information of the user groups that the quick response is
     * accessible to.</p>
     */
    inline bool GroupingConfigurationHasBeenSet() const { return m_groupingConfigurationHasBeenSet; }

    /**
     * <p>The configuration information of the user groups that the quick response is
     * accessible to.</p>
     */
    inline void SetGroupingConfiguration(const GroupingConfiguration& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = value; }

    /**
     * <p>The configuration information of the user groups that the quick response is
     * accessible to.</p>
     */
    inline void SetGroupingConfiguration(GroupingConfiguration&& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = std::move(value); }

    /**
     * <p>The configuration information of the user groups that the quick response is
     * accessible to.</p>
     */
    inline QuickResponseSearchResultData& WithGroupingConfiguration(const GroupingConfiguration& value) { SetGroupingConfiguration(value); return *this;}

    /**
     * <p>The configuration information of the user groups that the quick response is
     * accessible to.</p>
     */
    inline QuickResponseSearchResultData& WithGroupingConfiguration(GroupingConfiguration&& value) { SetGroupingConfiguration(std::move(value)); return *this;}


    /**
     * <p>Whether the quick response is active.</p>
     */
    inline bool GetIsActive() const{ return m_isActive; }

    /**
     * <p>Whether the quick response is active.</p>
     */
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }

    /**
     * <p>Whether the quick response is active.</p>
     */
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }

    /**
     * <p>Whether the quick response is active.</p>
     */
    inline QuickResponseSearchResultData& WithIsActive(bool value) { SetIsActive(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseArn() const{ return m_knowledgeBaseArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseArn(const Aws::String& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseArn(Aws::String&& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseArn(const char* value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline QuickResponseSearchResultData& WithKnowledgeBaseArn(const Aws::String& value) { SetKnowledgeBaseArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline QuickResponseSearchResultData& WithKnowledgeBaseArn(Aws::String&& value) { SetKnowledgeBaseArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline QuickResponseSearchResultData& WithKnowledgeBaseArn(const char* value) { SetKnowledgeBaseArn(value); return *this;}


    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline QuickResponseSearchResultData& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline QuickResponseSearchResultData& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p>
     */
    inline QuickResponseSearchResultData& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    /**
     * <p>The language code value for the language in which the quick response is
     * written.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }

    /**
     * <p>The language code value for the language in which the quick response is
     * written.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The language code value for the language in which the quick response is
     * written.</p>
     */
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The language code value for the language in which the quick response is
     * written.</p>
     */
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The language code value for the language in which the quick response is
     * written.</p>
     */
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }

    /**
     * <p>The language code value for the language in which the quick response is
     * written.</p>
     */
    inline QuickResponseSearchResultData& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The language code value for the language in which the quick response is
     * written.</p>
     */
    inline QuickResponseSearchResultData& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code value for the language in which the quick response is
     * written.</p>
     */
    inline QuickResponseSearchResultData& WithLanguage(const char* value) { SetLanguage(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the quick
     * response search result data.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the quick
     * response search result data.</p>
     */
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the quick
     * response search result data.</p>
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the quick
     * response search result data.</p>
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the quick
     * response search result data.</p>
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the quick
     * response search result data.</p>
     */
    inline QuickResponseSearchResultData& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the quick
     * response search result data.</p>
     */
    inline QuickResponseSearchResultData& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the quick
     * response search result data.</p>
     */
    inline QuickResponseSearchResultData& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * <p>The timestamp when the quick response search result data was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp when the quick response search result data was last
     * modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The timestamp when the quick response search result data was last
     * modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The timestamp when the quick response search result data was last
     * modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp when the quick response search result data was last
     * modified.</p>
     */
    inline QuickResponseSearchResultData& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp when the quick response search result data was last
     * modified.</p>
     */
    inline QuickResponseSearchResultData& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The name of the quick response.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the quick response.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the quick response.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the quick response.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the quick response.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the quick response.</p>
     */
    inline QuickResponseSearchResultData& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the quick response.</p>
     */
    inline QuickResponseSearchResultData& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the quick response.</p>
     */
    inline QuickResponseSearchResultData& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the quick response.</p>
     */
    inline const Aws::String& GetQuickResponseArn() const{ return m_quickResponseArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the quick response.</p>
     */
    inline bool QuickResponseArnHasBeenSet() const { return m_quickResponseArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the quick response.</p>
     */
    inline void SetQuickResponseArn(const Aws::String& value) { m_quickResponseArnHasBeenSet = true; m_quickResponseArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the quick response.</p>
     */
    inline void SetQuickResponseArn(Aws::String&& value) { m_quickResponseArnHasBeenSet = true; m_quickResponseArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the quick response.</p>
     */
    inline void SetQuickResponseArn(const char* value) { m_quickResponseArnHasBeenSet = true; m_quickResponseArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the quick response.</p>
     */
    inline QuickResponseSearchResultData& WithQuickResponseArn(const Aws::String& value) { SetQuickResponseArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the quick response.</p>
     */
    inline QuickResponseSearchResultData& WithQuickResponseArn(Aws::String&& value) { SetQuickResponseArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the quick response.</p>
     */
    inline QuickResponseSearchResultData& WithQuickResponseArn(const char* value) { SetQuickResponseArn(value); return *this;}


    /**
     * <p>The identifier of the quick response.</p>
     */
    inline const Aws::String& GetQuickResponseId() const{ return m_quickResponseId; }

    /**
     * <p>The identifier of the quick response.</p>
     */
    inline bool QuickResponseIdHasBeenSet() const { return m_quickResponseIdHasBeenSet; }

    /**
     * <p>The identifier of the quick response.</p>
     */
    inline void SetQuickResponseId(const Aws::String& value) { m_quickResponseIdHasBeenSet = true; m_quickResponseId = value; }

    /**
     * <p>The identifier of the quick response.</p>
     */
    inline void SetQuickResponseId(Aws::String&& value) { m_quickResponseIdHasBeenSet = true; m_quickResponseId = std::move(value); }

    /**
     * <p>The identifier of the quick response.</p>
     */
    inline void SetQuickResponseId(const char* value) { m_quickResponseIdHasBeenSet = true; m_quickResponseId.assign(value); }

    /**
     * <p>The identifier of the quick response.</p>
     */
    inline QuickResponseSearchResultData& WithQuickResponseId(const Aws::String& value) { SetQuickResponseId(value); return *this;}

    /**
     * <p>The identifier of the quick response.</p>
     */
    inline QuickResponseSearchResultData& WithQuickResponseId(Aws::String&& value) { SetQuickResponseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the quick response.</p>
     */
    inline QuickResponseSearchResultData& WithQuickResponseId(const char* value) { SetQuickResponseId(value); return *this;}


    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base.</p>
     */
    inline const Aws::String& GetShortcutKey() const{ return m_shortcutKey; }

    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base.</p>
     */
    inline bool ShortcutKeyHasBeenSet() const { return m_shortcutKeyHasBeenSet; }

    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base.</p>
     */
    inline void SetShortcutKey(const Aws::String& value) { m_shortcutKeyHasBeenSet = true; m_shortcutKey = value; }

    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base.</p>
     */
    inline void SetShortcutKey(Aws::String&& value) { m_shortcutKeyHasBeenSet = true; m_shortcutKey = std::move(value); }

    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base.</p>
     */
    inline void SetShortcutKey(const char* value) { m_shortcutKeyHasBeenSet = true; m_shortcutKey.assign(value); }

    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base.</p>
     */
    inline QuickResponseSearchResultData& WithShortcutKey(const Aws::String& value) { SetShortcutKey(value); return *this;}

    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base.</p>
     */
    inline QuickResponseSearchResultData& WithShortcutKey(Aws::String&& value) { SetShortcutKey(std::move(value)); return *this;}

    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base.</p>
     */
    inline QuickResponseSearchResultData& WithShortcutKey(const char* value) { SetShortcutKey(value); return *this;}


    /**
     * <p>The resource status of the quick response.</p>
     */
    inline const QuickResponseStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The resource status of the quick response.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The resource status of the quick response.</p>
     */
    inline void SetStatus(const QuickResponseStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The resource status of the quick response.</p>
     */
    inline void SetStatus(QuickResponseStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The resource status of the quick response.</p>
     */
    inline QuickResponseSearchResultData& WithStatus(const QuickResponseStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The resource status of the quick response.</p>
     */
    inline QuickResponseSearchResultData& WithStatus(QuickResponseStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline QuickResponseSearchResultData& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline QuickResponseSearchResultData& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline QuickResponseSearchResultData& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline QuickResponseSearchResultData& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline QuickResponseSearchResultData& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline QuickResponseSearchResultData& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline QuickResponseSearchResultData& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline QuickResponseSearchResultData& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline QuickResponseSearchResultData& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_attributesInterpolated;
    bool m_attributesInterpolatedHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributesNotInterpolated;
    bool m_attributesNotInterpolatedHasBeenSet = false;

    Aws::Vector<Aws::String> m_channels;
    bool m_channelsHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    QuickResponseContents m_contents;
    bool m_contentsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    GroupingConfiguration m_groupingConfiguration;
    bool m_groupingConfigurationHasBeenSet = false;

    bool m_isActive;
    bool m_isActiveHasBeenSet = false;

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_quickResponseArn;
    bool m_quickResponseArnHasBeenSet = false;

    Aws::String m_quickResponseId;
    bool m_quickResponseIdHasBeenSet = false;

    Aws::String m_shortcutKey;
    bool m_shortcutKeyHasBeenSet = false;

    QuickResponseStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
