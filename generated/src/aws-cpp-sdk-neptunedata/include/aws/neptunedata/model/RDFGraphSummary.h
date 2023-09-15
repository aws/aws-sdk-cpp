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
    AWS_NEPTUNEDATA_API RDFGraphSummary();
    AWS_NEPTUNEDATA_API RDFGraphSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API RDFGraphSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of distinct subjects in the graph.</p>
     */
    inline long long GetNumDistinctSubjects() const{ return m_numDistinctSubjects; }

    /**
     * <p>The number of distinct subjects in the graph.</p>
     */
    inline bool NumDistinctSubjectsHasBeenSet() const { return m_numDistinctSubjectsHasBeenSet; }

    /**
     * <p>The number of distinct subjects in the graph.</p>
     */
    inline void SetNumDistinctSubjects(long long value) { m_numDistinctSubjectsHasBeenSet = true; m_numDistinctSubjects = value; }

    /**
     * <p>The number of distinct subjects in the graph.</p>
     */
    inline RDFGraphSummary& WithNumDistinctSubjects(long long value) { SetNumDistinctSubjects(value); return *this;}


    /**
     * <p>The number of distinct predicates in the graph.</p>
     */
    inline long long GetNumDistinctPredicates() const{ return m_numDistinctPredicates; }

    /**
     * <p>The number of distinct predicates in the graph.</p>
     */
    inline bool NumDistinctPredicatesHasBeenSet() const { return m_numDistinctPredicatesHasBeenSet; }

    /**
     * <p>The number of distinct predicates in the graph.</p>
     */
    inline void SetNumDistinctPredicates(long long value) { m_numDistinctPredicatesHasBeenSet = true; m_numDistinctPredicates = value; }

    /**
     * <p>The number of distinct predicates in the graph.</p>
     */
    inline RDFGraphSummary& WithNumDistinctPredicates(long long value) { SetNumDistinctPredicates(value); return *this;}


    /**
     * <p>The number of quads in the graph.</p>
     */
    inline long long GetNumQuads() const{ return m_numQuads; }

    /**
     * <p>The number of quads in the graph.</p>
     */
    inline bool NumQuadsHasBeenSet() const { return m_numQuadsHasBeenSet; }

    /**
     * <p>The number of quads in the graph.</p>
     */
    inline void SetNumQuads(long long value) { m_numQuadsHasBeenSet = true; m_numQuads = value; }

    /**
     * <p>The number of quads in the graph.</p>
     */
    inline RDFGraphSummary& WithNumQuads(long long value) { SetNumQuads(value); return *this;}


    /**
     * <p>The number of classes in the graph.</p>
     */
    inline long long GetNumClasses() const{ return m_numClasses; }

    /**
     * <p>The number of classes in the graph.</p>
     */
    inline bool NumClassesHasBeenSet() const { return m_numClassesHasBeenSet; }

    /**
     * <p>The number of classes in the graph.</p>
     */
    inline void SetNumClasses(long long value) { m_numClassesHasBeenSet = true; m_numClasses = value; }

    /**
     * <p>The number of classes in the graph.</p>
     */
    inline RDFGraphSummary& WithNumClasses(long long value) { SetNumClasses(value); return *this;}


    /**
     * <p>A list of the classes in the graph.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClasses() const{ return m_classes; }

    /**
     * <p>A list of the classes in the graph.</p>
     */
    inline bool ClassesHasBeenSet() const { return m_classesHasBeenSet; }

    /**
     * <p>A list of the classes in the graph.</p>
     */
    inline void SetClasses(const Aws::Vector<Aws::String>& value) { m_classesHasBeenSet = true; m_classes = value; }

    /**
     * <p>A list of the classes in the graph.</p>
     */
    inline void SetClasses(Aws::Vector<Aws::String>&& value) { m_classesHasBeenSet = true; m_classes = std::move(value); }

    /**
     * <p>A list of the classes in the graph.</p>
     */
    inline RDFGraphSummary& WithClasses(const Aws::Vector<Aws::String>& value) { SetClasses(value); return *this;}

    /**
     * <p>A list of the classes in the graph.</p>
     */
    inline RDFGraphSummary& WithClasses(Aws::Vector<Aws::String>&& value) { SetClasses(std::move(value)); return *this;}

    /**
     * <p>A list of the classes in the graph.</p>
     */
    inline RDFGraphSummary& AddClasses(const Aws::String& value) { m_classesHasBeenSet = true; m_classes.push_back(value); return *this; }

    /**
     * <p>A list of the classes in the graph.</p>
     */
    inline RDFGraphSummary& AddClasses(Aws::String&& value) { m_classesHasBeenSet = true; m_classes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the classes in the graph.</p>
     */
    inline RDFGraphSummary& AddClasses(const char* value) { m_classesHasBeenSet = true; m_classes.push_back(value); return *this; }


    /**
     * <p>"A list of predicates in the graph, along with the predicate counts.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, long long>>& GetPredicates() const{ return m_predicates; }

    /**
     * <p>"A list of predicates in the graph, along with the predicate counts.</p>
     */
    inline bool PredicatesHasBeenSet() const { return m_predicatesHasBeenSet; }

    /**
     * <p>"A list of predicates in the graph, along with the predicate counts.</p>
     */
    inline void SetPredicates(const Aws::Vector<Aws::Map<Aws::String, long long>>& value) { m_predicatesHasBeenSet = true; m_predicates = value; }

    /**
     * <p>"A list of predicates in the graph, along with the predicate counts.</p>
     */
    inline void SetPredicates(Aws::Vector<Aws::Map<Aws::String, long long>>&& value) { m_predicatesHasBeenSet = true; m_predicates = std::move(value); }

    /**
     * <p>"A list of predicates in the graph, along with the predicate counts.</p>
     */
    inline RDFGraphSummary& WithPredicates(const Aws::Vector<Aws::Map<Aws::String, long long>>& value) { SetPredicates(value); return *this;}

    /**
     * <p>"A list of predicates in the graph, along with the predicate counts.</p>
     */
    inline RDFGraphSummary& WithPredicates(Aws::Vector<Aws::Map<Aws::String, long long>>&& value) { SetPredicates(std::move(value)); return *this;}

    /**
     * <p>"A list of predicates in the graph, along with the predicate counts.</p>
     */
    inline RDFGraphSummary& AddPredicates(const Aws::Map<Aws::String, long long>& value) { m_predicatesHasBeenSet = true; m_predicates.push_back(value); return *this; }

    /**
     * <p>"A list of predicates in the graph, along with the predicate counts.</p>
     */
    inline RDFGraphSummary& AddPredicates(Aws::Map<Aws::String, long long>&& value) { m_predicatesHasBeenSet = true; m_predicates.push_back(std::move(value)); return *this; }


    /**
     * <p>This field is only present when the request mode is <code>DETAILED</code>. It
     * contains a list of subject structures.</p>
     */
    inline const Aws::Vector<SubjectStructure>& GetSubjectStructures() const{ return m_subjectStructures; }

    /**
     * <p>This field is only present when the request mode is <code>DETAILED</code>. It
     * contains a list of subject structures.</p>
     */
    inline bool SubjectStructuresHasBeenSet() const { return m_subjectStructuresHasBeenSet; }

    /**
     * <p>This field is only present when the request mode is <code>DETAILED</code>. It
     * contains a list of subject structures.</p>
     */
    inline void SetSubjectStructures(const Aws::Vector<SubjectStructure>& value) { m_subjectStructuresHasBeenSet = true; m_subjectStructures = value; }

    /**
     * <p>This field is only present when the request mode is <code>DETAILED</code>. It
     * contains a list of subject structures.</p>
     */
    inline void SetSubjectStructures(Aws::Vector<SubjectStructure>&& value) { m_subjectStructuresHasBeenSet = true; m_subjectStructures = std::move(value); }

    /**
     * <p>This field is only present when the request mode is <code>DETAILED</code>. It
     * contains a list of subject structures.</p>
     */
    inline RDFGraphSummary& WithSubjectStructures(const Aws::Vector<SubjectStructure>& value) { SetSubjectStructures(value); return *this;}

    /**
     * <p>This field is only present when the request mode is <code>DETAILED</code>. It
     * contains a list of subject structures.</p>
     */
    inline RDFGraphSummary& WithSubjectStructures(Aws::Vector<SubjectStructure>&& value) { SetSubjectStructures(std::move(value)); return *this;}

    /**
     * <p>This field is only present when the request mode is <code>DETAILED</code>. It
     * contains a list of subject structures.</p>
     */
    inline RDFGraphSummary& AddSubjectStructures(const SubjectStructure& value) { m_subjectStructuresHasBeenSet = true; m_subjectStructures.push_back(value); return *this; }

    /**
     * <p>This field is only present when the request mode is <code>DETAILED</code>. It
     * contains a list of subject structures.</p>
     */
    inline RDFGraphSummary& AddSubjectStructures(SubjectStructure&& value) { m_subjectStructuresHasBeenSet = true; m_subjectStructures.push_back(std::move(value)); return *this; }

  private:

    long long m_numDistinctSubjects;
    bool m_numDistinctSubjectsHasBeenSet = false;

    long long m_numDistinctPredicates;
    bool m_numDistinctPredicatesHasBeenSet = false;

    long long m_numQuads;
    bool m_numQuadsHasBeenSet = false;

    long long m_numClasses;
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
