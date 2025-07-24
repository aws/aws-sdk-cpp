/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/SourceReference.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>Contains information about a source code repository that hosts the workflow
   * definition files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DefinitionRepository">AWS
   * API Reference</a></p>
   */
  class DefinitionRepository
  {
  public:
    AWS_OMICS_API DefinitionRepository() = default;
    AWS_OMICS_API DefinitionRepository(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API DefinitionRepository& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connection to the source code
     * repository.</p>
     */
    inline const Aws::String& GetConnectionArn() const { return m_connectionArn; }
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }
    template<typename ConnectionArnT = Aws::String>
    void SetConnectionArn(ConnectionArnT&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::forward<ConnectionArnT>(value); }
    template<typename ConnectionArnT = Aws::String>
    DefinitionRepository& WithConnectionArn(ConnectionArnT&& value) { SetConnectionArn(std::forward<ConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full repository identifier, including the repository owner and name. For
     * example, 'repository-owner/repository-name'.</p>
     */
    inline const Aws::String& GetFullRepositoryId() const { return m_fullRepositoryId; }
    inline bool FullRepositoryIdHasBeenSet() const { return m_fullRepositoryIdHasBeenSet; }
    template<typename FullRepositoryIdT = Aws::String>
    void SetFullRepositoryId(FullRepositoryIdT&& value) { m_fullRepositoryIdHasBeenSet = true; m_fullRepositoryId = std::forward<FullRepositoryIdT>(value); }
    template<typename FullRepositoryIdT = Aws::String>
    DefinitionRepository& WithFullRepositoryId(FullRepositoryIdT&& value) { SetFullRepositoryId(std::forward<FullRepositoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source reference for the repository, such as a branch name, tag, or
     * commit ID.</p>
     */
    inline const SourceReference& GetSourceReference() const { return m_sourceReference; }
    inline bool SourceReferenceHasBeenSet() const { return m_sourceReferenceHasBeenSet; }
    template<typename SourceReferenceT = SourceReference>
    void SetSourceReference(SourceReferenceT&& value) { m_sourceReferenceHasBeenSet = true; m_sourceReference = std::forward<SourceReferenceT>(value); }
    template<typename SourceReferenceT = SourceReference>
    DefinitionRepository& WithSourceReference(SourceReferenceT&& value) { SetSourceReference(std::forward<SourceReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of file patterns to exclude when retrieving the workflow definition
     * from the repository.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeFilePatterns() const { return m_excludeFilePatterns; }
    inline bool ExcludeFilePatternsHasBeenSet() const { return m_excludeFilePatternsHasBeenSet; }
    template<typename ExcludeFilePatternsT = Aws::Vector<Aws::String>>
    void SetExcludeFilePatterns(ExcludeFilePatternsT&& value) { m_excludeFilePatternsHasBeenSet = true; m_excludeFilePatterns = std::forward<ExcludeFilePatternsT>(value); }
    template<typename ExcludeFilePatternsT = Aws::Vector<Aws::String>>
    DefinitionRepository& WithExcludeFilePatterns(ExcludeFilePatternsT&& value) { SetExcludeFilePatterns(std::forward<ExcludeFilePatternsT>(value)); return *this;}
    template<typename ExcludeFilePatternsT = Aws::String>
    DefinitionRepository& AddExcludeFilePatterns(ExcludeFilePatternsT&& value) { m_excludeFilePatternsHasBeenSet = true; m_excludeFilePatterns.emplace_back(std::forward<ExcludeFilePatternsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet = false;

    Aws::String m_fullRepositoryId;
    bool m_fullRepositoryIdHasBeenSet = false;

    SourceReference m_sourceReference;
    bool m_sourceReferenceHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeFilePatterns;
    bool m_excludeFilePatternsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
