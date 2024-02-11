/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReadSetStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/CreationType.h>
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
   * <p>A filter for read sets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ReadSetFilter">AWS
   * API Reference</a></p>
   */
  class ReadSetFilter
  {
  public:
    AWS_OMICS_API ReadSetFilter();
    AWS_OMICS_API ReadSetFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ReadSetFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A name to filter on.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name to filter on.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name to filter on.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name to filter on.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name to filter on.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name to filter on.</p>
     */
    inline ReadSetFilter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name to filter on.</p>
     */
    inline ReadSetFilter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name to filter on.</p>
     */
    inline ReadSetFilter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A status to filter on.</p>
     */
    inline const ReadSetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A status to filter on.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A status to filter on.</p>
     */
    inline void SetStatus(const ReadSetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A status to filter on.</p>
     */
    inline void SetStatus(ReadSetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A status to filter on.</p>
     */
    inline ReadSetFilter& WithStatus(const ReadSetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A status to filter on.</p>
     */
    inline ReadSetFilter& WithStatus(ReadSetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A genome reference ARN to filter on.</p>
     */
    inline const Aws::String& GetReferenceArn() const{ return m_referenceArn; }

    /**
     * <p>A genome reference ARN to filter on.</p>
     */
    inline bool ReferenceArnHasBeenSet() const { return m_referenceArnHasBeenSet; }

    /**
     * <p>A genome reference ARN to filter on.</p>
     */
    inline void SetReferenceArn(const Aws::String& value) { m_referenceArnHasBeenSet = true; m_referenceArn = value; }

    /**
     * <p>A genome reference ARN to filter on.</p>
     */
    inline void SetReferenceArn(Aws::String&& value) { m_referenceArnHasBeenSet = true; m_referenceArn = std::move(value); }

    /**
     * <p>A genome reference ARN to filter on.</p>
     */
    inline void SetReferenceArn(const char* value) { m_referenceArnHasBeenSet = true; m_referenceArn.assign(value); }

    /**
     * <p>A genome reference ARN to filter on.</p>
     */
    inline ReadSetFilter& WithReferenceArn(const Aws::String& value) { SetReferenceArn(value); return *this;}

    /**
     * <p>A genome reference ARN to filter on.</p>
     */
    inline ReadSetFilter& WithReferenceArn(Aws::String&& value) { SetReferenceArn(std::move(value)); return *this;}

    /**
     * <p>A genome reference ARN to filter on.</p>
     */
    inline ReadSetFilter& WithReferenceArn(const char* value) { SetReferenceArn(value); return *this;}


    /**
     * <p>The filter's start date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }

    /**
     * <p>The filter's start date.</p>
     */
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }

    /**
     * <p>The filter's start date.</p>
     */
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * <p>The filter's start date.</p>
     */
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }

    /**
     * <p>The filter's start date.</p>
     */
    inline ReadSetFilter& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}

    /**
     * <p>The filter's start date.</p>
     */
    inline ReadSetFilter& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}


    /**
     * <p>The filter's end date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }

    /**
     * <p>The filter's end date.</p>
     */
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }

    /**
     * <p>The filter's end date.</p>
     */
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * <p>The filter's end date.</p>
     */
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }

    /**
     * <p>The filter's end date.</p>
     */
    inline ReadSetFilter& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}

    /**
     * <p>The filter's end date.</p>
     */
    inline ReadSetFilter& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}


    /**
     * <p> The read set source's sample ID. </p>
     */
    inline const Aws::String& GetSampleId() const{ return m_sampleId; }

    /**
     * <p> The read set source's sample ID. </p>
     */
    inline bool SampleIdHasBeenSet() const { return m_sampleIdHasBeenSet; }

    /**
     * <p> The read set source's sample ID. </p>
     */
    inline void SetSampleId(const Aws::String& value) { m_sampleIdHasBeenSet = true; m_sampleId = value; }

    /**
     * <p> The read set source's sample ID. </p>
     */
    inline void SetSampleId(Aws::String&& value) { m_sampleIdHasBeenSet = true; m_sampleId = std::move(value); }

    /**
     * <p> The read set source's sample ID. </p>
     */
    inline void SetSampleId(const char* value) { m_sampleIdHasBeenSet = true; m_sampleId.assign(value); }

    /**
     * <p> The read set source's sample ID. </p>
     */
    inline ReadSetFilter& WithSampleId(const Aws::String& value) { SetSampleId(value); return *this;}

    /**
     * <p> The read set source's sample ID. </p>
     */
    inline ReadSetFilter& WithSampleId(Aws::String&& value) { SetSampleId(std::move(value)); return *this;}

    /**
     * <p> The read set source's sample ID. </p>
     */
    inline ReadSetFilter& WithSampleId(const char* value) { SetSampleId(value); return *this;}


    /**
     * <p> The read set source's subject ID. </p>
     */
    inline const Aws::String& GetSubjectId() const{ return m_subjectId; }

    /**
     * <p> The read set source's subject ID. </p>
     */
    inline bool SubjectIdHasBeenSet() const { return m_subjectIdHasBeenSet; }

    /**
     * <p> The read set source's subject ID. </p>
     */
    inline void SetSubjectId(const Aws::String& value) { m_subjectIdHasBeenSet = true; m_subjectId = value; }

    /**
     * <p> The read set source's subject ID. </p>
     */
    inline void SetSubjectId(Aws::String&& value) { m_subjectIdHasBeenSet = true; m_subjectId = std::move(value); }

    /**
     * <p> The read set source's subject ID. </p>
     */
    inline void SetSubjectId(const char* value) { m_subjectIdHasBeenSet = true; m_subjectId.assign(value); }

    /**
     * <p> The read set source's subject ID. </p>
     */
    inline ReadSetFilter& WithSubjectId(const Aws::String& value) { SetSubjectId(value); return *this;}

    /**
     * <p> The read set source's subject ID. </p>
     */
    inline ReadSetFilter& WithSubjectId(Aws::String&& value) { SetSubjectId(std::move(value)); return *this;}

    /**
     * <p> The read set source's subject ID. </p>
     */
    inline ReadSetFilter& WithSubjectId(const char* value) { SetSubjectId(value); return *this;}


    /**
     * <p> Where the source originated. </p>
     */
    inline const Aws::String& GetGeneratedFrom() const{ return m_generatedFrom; }

    /**
     * <p> Where the source originated. </p>
     */
    inline bool GeneratedFromHasBeenSet() const { return m_generatedFromHasBeenSet; }

    /**
     * <p> Where the source originated. </p>
     */
    inline void SetGeneratedFrom(const Aws::String& value) { m_generatedFromHasBeenSet = true; m_generatedFrom = value; }

    /**
     * <p> Where the source originated. </p>
     */
    inline void SetGeneratedFrom(Aws::String&& value) { m_generatedFromHasBeenSet = true; m_generatedFrom = std::move(value); }

    /**
     * <p> Where the source originated. </p>
     */
    inline void SetGeneratedFrom(const char* value) { m_generatedFromHasBeenSet = true; m_generatedFrom.assign(value); }

    /**
     * <p> Where the source originated. </p>
     */
    inline ReadSetFilter& WithGeneratedFrom(const Aws::String& value) { SetGeneratedFrom(value); return *this;}

    /**
     * <p> Where the source originated. </p>
     */
    inline ReadSetFilter& WithGeneratedFrom(Aws::String&& value) { SetGeneratedFrom(std::move(value)); return *this;}

    /**
     * <p> Where the source originated. </p>
     */
    inline ReadSetFilter& WithGeneratedFrom(const char* value) { SetGeneratedFrom(value); return *this;}


    /**
     * <p> The creation type of the read set. </p>
     */
    inline const CreationType& GetCreationType() const{ return m_creationType; }

    /**
     * <p> The creation type of the read set. </p>
     */
    inline bool CreationTypeHasBeenSet() const { return m_creationTypeHasBeenSet; }

    /**
     * <p> The creation type of the read set. </p>
     */
    inline void SetCreationType(const CreationType& value) { m_creationTypeHasBeenSet = true; m_creationType = value; }

    /**
     * <p> The creation type of the read set. </p>
     */
    inline void SetCreationType(CreationType&& value) { m_creationTypeHasBeenSet = true; m_creationType = std::move(value); }

    /**
     * <p> The creation type of the read set. </p>
     */
    inline ReadSetFilter& WithCreationType(const CreationType& value) { SetCreationType(value); return *this;}

    /**
     * <p> The creation type of the read set. </p>
     */
    inline ReadSetFilter& WithCreationType(CreationType&& value) { SetCreationType(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ReadSetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_referenceArn;
    bool m_referenceArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    Aws::String m_sampleId;
    bool m_sampleIdHasBeenSet = false;

    Aws::String m_subjectId;
    bool m_subjectIdHasBeenSet = false;

    Aws::String m_generatedFrom;
    bool m_generatedFromHasBeenSet = false;

    CreationType m_creationType;
    bool m_creationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
