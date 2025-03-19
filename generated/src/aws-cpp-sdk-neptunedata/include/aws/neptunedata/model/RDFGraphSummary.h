/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/neptunedata/model/SubjectStructure.h>
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
namespace neptunedata
{
namespace Model
{

  /**
   * <p>The RDF graph summary API returns a read-only list of classes and predicate
   * keys, along with counts of quads, subjects, and predicates.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/RDFGraphSummary">AWS
   * API Reference</a></p>
   */
  class RDFGraphSummary
  {
  public:
    AWS_NEPTUNEDATA_API RDFGraphSummary() = default;
    AWS_NEPTUNEDATA_API RDFGraphSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API RDFGraphSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of distinct subjects in the graph.</p>
     */
    inline long long GetNumDistinctSubjects() const { return m_numDistinctSubjects; }
    inline bool NumDistinctSubjectsHasBeenSet() const { return m_numDistinctSubjectsHasBeenSet; }
    inline void SetNumDistinctSubjects(long long value) { m_numDistinctSubjectsHasBeenSet = true; m_numDistinctSubjects = value; }
    inline RDFGraphSummary& WithNumDistinctSubjects(long long value) { SetNumDistinctSubjects(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of distinct predicates in the graph.</p>
     */
    inline long long GetNumDistinctPredicates() const { return m_numDistinctPredicates; }
    inline bool NumDistinctPredicatesHasBeenSet() const { return m_numDistinctPredicatesHasBeenSet; }
    inline void SetNumDistinctPredicates(long long value) { m_numDistinctPredicatesHasBeenSet = true; m_numDistinctPredicates = value; }
    inline RDFGraphSummary& WithNumDistinctPredicates(long long value) { SetNumDistinctPredicates(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of quads in the graph.</p>
     */
    inline long long GetNumQuads() const { return m_numQuads; }
    inline bool NumQuadsHasBeenSet() const { return m_numQuadsHasBeenSet; }
    inline void SetNumQuads(long long value) { m_numQuadsHasBeenSet = true; m_numQuads = value; }
    inline RDFGraphSummary& WithNumQuads(long long value) { SetNumQuads(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of classes in the graph.</p>
     */
    inline long long GetNumClasses() const { return m_numClasses; }
    inline bool NumClassesHasBeenSet() const { return m_numClassesHasBeenSet; }
    inline void SetNumClasses(long long value) { m_numClassesHasBeenSet = true; m_numClasses = value; }
    inline RDFGraphSummary& WithNumClasses(long long value) { SetNumClasses(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the classes in the graph.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClasses() const { return m_classes; }
    inline bool ClassesHasBeenSet() const { return m_classesHasBeenSet; }
    template<typename ClassesT = Aws::Vector<Aws::String>>
    void SetClasses(ClassesT&& value) { m_classesHasBeenSet = true; m_classes = std::forward<ClassesT>(value); }
    template<typename ClassesT = Aws::Vector<Aws::String>>
    RDFGraphSummary& WithClasses(ClassesT&& value) { SetClasses(std::forward<ClassesT>(value)); return *this;}
    template<typename ClassesT = Aws::String>
    RDFGraphSummary& AddClasses(ClassesT&& value) { m_classesHasBeenSet = true; m_classes.emplace_back(std::forward<ClassesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>"A list of predicates in the graph, along with the predicate counts.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, long long>>& GetPredicates() const { return m_predicates; }
    inline bool PredicatesHasBeenSet() const { return m_predicatesHasBeenSet; }
    template<typename PredicatesT = Aws::Vector<Aws::Map<Aws::String, long long>>>
    void SetPredicates(PredicatesT&& value) { m_predicatesHasBeenSet = true; m_predicates = std::forward<PredicatesT>(value); }
    template<typename PredicatesT = Aws::Vector<Aws::Map<Aws::String, long long>>>
    RDFGraphSummary& WithPredicates(PredicatesT&& value) { SetPredicates(std::forward<PredicatesT>(value)); return *this;}
    template<typename PredicatesT = Aws::Map<Aws::String, long long>>
    RDFGraphSummary& AddPredicates(PredicatesT&& value) { m_predicatesHasBeenSet = true; m_predicates.emplace_back(std::forward<PredicatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This field is only present when the request mode is <code>DETAILED</code>. It
     * contains a list of subject structures.</p>
     */
    inline const Aws::Vector<SubjectStructure>& GetSubjectStructures() const { return m_subjectStructures; }
    inline bool SubjectStructuresHasBeenSet() const { return m_subjectStructuresHasBeenSet; }
    template<typename SubjectStructuresT = Aws::Vector<SubjectStructure>>
    void SetSubjectStructures(SubjectStructuresT&& value) { m_subjectStructuresHasBeenSet = true; m_subjectStructures = std::forward<SubjectStructuresT>(value); }
    template<typename SubjectStructuresT = Aws::Vector<SubjectStructure>>
    RDFGraphSummary& WithSubjectStructures(SubjectStructuresT&& value) { SetSubjectStructures(std::forward<SubjectStructuresT>(value)); return *this;}
    template<typename SubjectStructuresT = SubjectStructure>
    RDFGraphSummary& AddSubjectStructures(SubjectStructuresT&& value) { m_subjectStructuresHasBeenSet = true; m_subjectStructures.emplace_back(std::forward<SubjectStructuresT>(value)); return *this; }
    ///@}
  private:

    long long m_numDistinctSubjects{0};
    bool m_numDistinctSubjectsHasBeenSet = false;

    long long m_numDistinctPredicates{0};
    bool m_numDistinctPredicatesHasBeenSet = false;

    long long m_numQuads{0};
    bool m_numQuadsHasBeenSet = false;

    long long m_numClasses{0};
    bool m_numClassesHasBeenSet = false;

    Aws::Vector<Aws::String> m_classes;
    bool m_classesHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, long long>> m_predicates;
    bool m_predicatesHasBeenSet = false;

    Aws::Vector<SubjectStructure> m_subjectStructures;
    bool m_subjectStructuresHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
