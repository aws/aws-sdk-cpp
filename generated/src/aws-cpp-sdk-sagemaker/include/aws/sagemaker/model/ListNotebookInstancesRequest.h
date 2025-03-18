/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/NotebookInstanceSortKey.h>
#include <aws/sagemaker/model/NotebookInstanceSortOrder.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/NotebookInstanceStatus.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListNotebookInstancesRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListNotebookInstancesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListNotebookInstances"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> If the previous call to the <code>ListNotebookInstances</code> is truncated,
     * the response includes a <code>NextToken</code>. You can use this token in your
     * subsequent <code>ListNotebookInstances</code> request to fetch the next set of
     * notebook instances. </p>  <p>You might specify a filter or a sort order in
     * your request. When response is truncated, you must use the same values for the
     * filer and sort order in the next request. </p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListNotebookInstancesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of notebook instances to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListNotebookInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p>
     */
    inline NotebookInstanceSortKey GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(NotebookInstanceSortKey value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListNotebookInstancesRequest& WithSortBy(NotebookInstanceSortKey value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order for results. </p>
     */
    inline NotebookInstanceSortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(NotebookInstanceSortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListNotebookInstancesRequest& WithSortOrder(NotebookInstanceSortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string in the notebook instances' name. This filter returns only notebook
     * instances whose name contains the specified string.</p>
     */
    inline const Aws::String& GetNameContains() const { return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    template<typename NameContainsT = Aws::String>
    void SetNameContains(NameContainsT&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::forward<NameContainsT>(value); }
    template<typename NameContainsT = Aws::String>
    ListNotebookInstancesRequest& WithNameContains(NameContainsT&& value) { SetNameContains(std::forward<NameContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only notebook instances that were created before the
     * specified time (timestamp). </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    void SetCreationTimeBefore(CreationTimeBeforeT&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value); }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    ListNotebookInstancesRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) { SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only notebook instances that were created after the
     * specified time (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    void SetCreationTimeAfter(CreationTimeAfterT&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::forward<CreationTimeAfterT>(value); }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    ListNotebookInstancesRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) { SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only notebook instances that were modified before the
     * specified time (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const { return m_lastModifiedTimeBefore; }
    inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }
    template<typename LastModifiedTimeBeforeT = Aws::Utils::DateTime>
    void SetLastModifiedTimeBefore(LastModifiedTimeBeforeT&& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = std::forward<LastModifiedTimeBeforeT>(value); }
    template<typename LastModifiedTimeBeforeT = Aws::Utils::DateTime>
    ListNotebookInstancesRequest& WithLastModifiedTimeBefore(LastModifiedTimeBeforeT&& value) { SetLastModifiedTimeBefore(std::forward<LastModifiedTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only notebook instances that were modified after the
     * specified time (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const { return m_lastModifiedTimeAfter; }
    inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }
    template<typename LastModifiedTimeAfterT = Aws::Utils::DateTime>
    void SetLastModifiedTimeAfter(LastModifiedTimeAfterT&& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = std::forward<LastModifiedTimeAfterT>(value); }
    template<typename LastModifiedTimeAfterT = Aws::Utils::DateTime>
    ListNotebookInstancesRequest& WithLastModifiedTimeAfter(LastModifiedTimeAfterT&& value) { SetLastModifiedTimeAfter(std::forward<LastModifiedTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only notebook instances with the specified status.</p>
     */
    inline NotebookInstanceStatus GetStatusEquals() const { return m_statusEquals; }
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
    inline void SetStatusEquals(NotebookInstanceStatus value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }
    inline ListNotebookInstancesRequest& WithStatusEquals(NotebookInstanceStatus value) { SetStatusEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string in the name of a notebook instances lifecycle configuration
     * associated with this notebook instance. This filter returns only notebook
     * instances associated with a lifecycle configuration with a name that contains
     * the specified string.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigNameContains() const { return m_notebookInstanceLifecycleConfigNameContains; }
    inline bool NotebookInstanceLifecycleConfigNameContainsHasBeenSet() const { return m_notebookInstanceLifecycleConfigNameContainsHasBeenSet; }
    template<typename NotebookInstanceLifecycleConfigNameContainsT = Aws::String>
    void SetNotebookInstanceLifecycleConfigNameContains(NotebookInstanceLifecycleConfigNameContainsT&& value) { m_notebookInstanceLifecycleConfigNameContainsHasBeenSet = true; m_notebookInstanceLifecycleConfigNameContains = std::forward<NotebookInstanceLifecycleConfigNameContainsT>(value); }
    template<typename NotebookInstanceLifecycleConfigNameContainsT = Aws::String>
    ListNotebookInstancesRequest& WithNotebookInstanceLifecycleConfigNameContains(NotebookInstanceLifecycleConfigNameContainsT&& value) { SetNotebookInstanceLifecycleConfigNameContains(std::forward<NotebookInstanceLifecycleConfigNameContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string in the name or URL of a Git repository associated with this notebook
     * instance. This filter returns only notebook instances associated with a git
     * repository with a name that contains the specified string.</p>
     */
    inline const Aws::String& GetDefaultCodeRepositoryContains() const { return m_defaultCodeRepositoryContains; }
    inline bool DefaultCodeRepositoryContainsHasBeenSet() const { return m_defaultCodeRepositoryContainsHasBeenSet; }
    template<typename DefaultCodeRepositoryContainsT = Aws::String>
    void SetDefaultCodeRepositoryContains(DefaultCodeRepositoryContainsT&& value) { m_defaultCodeRepositoryContainsHasBeenSet = true; m_defaultCodeRepositoryContains = std::forward<DefaultCodeRepositoryContainsT>(value); }
    template<typename DefaultCodeRepositoryContainsT = Aws::String>
    ListNotebookInstancesRequest& WithDefaultCodeRepositoryContains(DefaultCodeRepositoryContainsT&& value) { SetDefaultCodeRepositoryContains(std::forward<DefaultCodeRepositoryContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only notebook instances with associated with the
     * specified git repository.</p>
     */
    inline const Aws::String& GetAdditionalCodeRepositoryEquals() const { return m_additionalCodeRepositoryEquals; }
    inline bool AdditionalCodeRepositoryEqualsHasBeenSet() const { return m_additionalCodeRepositoryEqualsHasBeenSet; }
    template<typename AdditionalCodeRepositoryEqualsT = Aws::String>
    void SetAdditionalCodeRepositoryEquals(AdditionalCodeRepositoryEqualsT&& value) { m_additionalCodeRepositoryEqualsHasBeenSet = true; m_additionalCodeRepositoryEquals = std::forward<AdditionalCodeRepositoryEqualsT>(value); }
    template<typename AdditionalCodeRepositoryEqualsT = Aws::String>
    ListNotebookInstancesRequest& WithAdditionalCodeRepositoryEquals(AdditionalCodeRepositoryEqualsT&& value) { SetAdditionalCodeRepositoryEquals(std::forward<AdditionalCodeRepositoryEqualsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    NotebookInstanceSortKey m_sortBy{NotebookInstanceSortKey::NOT_SET};
    bool m_sortByHasBeenSet = false;

    NotebookInstanceSortOrder m_sortOrder{NotebookInstanceSortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore{};
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter{};
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeBefore{};
    bool m_lastModifiedTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeAfter{};
    bool m_lastModifiedTimeAfterHasBeenSet = false;

    NotebookInstanceStatus m_statusEquals{NotebookInstanceStatus::NOT_SET};
    bool m_statusEqualsHasBeenSet = false;

    Aws::String m_notebookInstanceLifecycleConfigNameContains;
    bool m_notebookInstanceLifecycleConfigNameContainsHasBeenSet = false;

    Aws::String m_defaultCodeRepositoryContains;
    bool m_defaultCodeRepositoryContainsHasBeenSet = false;

    Aws::String m_additionalCodeRepositoryEquals;
    bool m_additionalCodeRepositoryEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
