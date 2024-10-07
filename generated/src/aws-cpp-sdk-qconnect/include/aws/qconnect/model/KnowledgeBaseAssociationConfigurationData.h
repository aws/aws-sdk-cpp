/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/TagFilter.h>
#include <aws/qconnect/model/KnowledgeBaseSearchType.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The data of the configuration for a <code>KNOWLEDGE_BASE</code> type Amazon Q
   * in Connect Assistant Association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/KnowledgeBaseAssociationConfigurationData">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseAssociationConfigurationData
  {
  public:
    AWS_QCONNECT_API KnowledgeBaseAssociationConfigurationData();
    AWS_QCONNECT_API KnowledgeBaseAssociationConfigurationData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API KnowledgeBaseAssociationConfigurationData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const TagFilter& GetContentTagFilter() const{ return m_contentTagFilter; }
    inline bool ContentTagFilterHasBeenSet() const { return m_contentTagFilterHasBeenSet; }
    inline void SetContentTagFilter(const TagFilter& value) { m_contentTagFilterHasBeenSet = true; m_contentTagFilter = value; }
    inline void SetContentTagFilter(TagFilter&& value) { m_contentTagFilterHasBeenSet = true; m_contentTagFilter = std::move(value); }
    inline KnowledgeBaseAssociationConfigurationData& WithContentTagFilter(const TagFilter& value) { SetContentTagFilter(value); return *this;}
    inline KnowledgeBaseAssociationConfigurationData& WithContentTagFilter(TagFilter&& value) { SetContentTagFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline KnowledgeBaseAssociationConfigurationData& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search type to be used against the Knowledge Base for this request. The
     * values can be <code>SEMANTIC</code> which uses vector embeddings or
     * <code>HYBRID</code> which use vector embeddings and raw text</p>
     */
    inline const KnowledgeBaseSearchType& GetOverrideKnowledgeBaseSearchType() const{ return m_overrideKnowledgeBaseSearchType; }
    inline bool OverrideKnowledgeBaseSearchTypeHasBeenSet() const { return m_overrideKnowledgeBaseSearchTypeHasBeenSet; }
    inline void SetOverrideKnowledgeBaseSearchType(const KnowledgeBaseSearchType& value) { m_overrideKnowledgeBaseSearchTypeHasBeenSet = true; m_overrideKnowledgeBaseSearchType = value; }
    inline void SetOverrideKnowledgeBaseSearchType(KnowledgeBaseSearchType&& value) { m_overrideKnowledgeBaseSearchTypeHasBeenSet = true; m_overrideKnowledgeBaseSearchType = std::move(value); }
    inline KnowledgeBaseAssociationConfigurationData& WithOverrideKnowledgeBaseSearchType(const KnowledgeBaseSearchType& value) { SetOverrideKnowledgeBaseSearchType(value); return *this;}
    inline KnowledgeBaseAssociationConfigurationData& WithOverrideKnowledgeBaseSearchType(KnowledgeBaseSearchType&& value) { SetOverrideKnowledgeBaseSearchType(std::move(value)); return *this;}
    ///@}
  private:

    TagFilter m_contentTagFilter;
    bool m_contentTagFilterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    KnowledgeBaseSearchType m_overrideKnowledgeBaseSearchType;
    bool m_overrideKnowledgeBaseSearchTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
