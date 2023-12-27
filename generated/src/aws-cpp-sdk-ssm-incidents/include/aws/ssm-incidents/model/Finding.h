/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm-incidents/model/FindingDetails.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Information about a specific CodeDeploy deployment or CloudFormation stack
   * creation or update that occurred around the time of a reported incident. These
   * activities can be investigated as a potential cause of the
   * incident.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/Finding">AWS
   * API Reference</a></p>
   */
  class Finding
  {
  public:
    AWS_SSMINCIDENTS_API Finding();
    AWS_SSMINCIDENTS_API Finding(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Finding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp for when a finding was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp for when a finding was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The timestamp for when a finding was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The timestamp for when a finding was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The timestamp for when a finding was created.</p>
     */
    inline Finding& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp for when a finding was created.</p>
     */
    inline Finding& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Details about the finding.</p>
     */
    inline const FindingDetails& GetDetails() const{ return m_details; }

    /**
     * <p>Details about the finding.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>Details about the finding.</p>
     */
    inline void SetDetails(const FindingDetails& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>Details about the finding.</p>
     */
    inline void SetDetails(FindingDetails&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>Details about the finding.</p>
     */
    inline Finding& WithDetails(const FindingDetails& value) { SetDetails(value); return *this;}

    /**
     * <p>Details about the finding.</p>
     */
    inline Finding& WithDetails(FindingDetails&& value) { SetDetails(std::move(value)); return *this;}


    /**
     * <p>The ID assigned to the finding.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID assigned to the finding.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID assigned to the finding.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID assigned to the finding.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID assigned to the finding.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID assigned to the finding.</p>
     */
    inline Finding& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID assigned to the finding.</p>
     */
    inline Finding& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID assigned to the finding.</p>
     */
    inline Finding& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The timestamp for when the finding was most recently updated with additional
     * information.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp for when the finding was most recently updated with additional
     * information.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The timestamp for when the finding was most recently updated with additional
     * information.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The timestamp for when the finding was most recently updated with additional
     * information.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp for when the finding was most recently updated with additional
     * information.</p>
     */
    inline Finding& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp for when the finding was most recently updated with additional
     * information.</p>
     */
    inline Finding& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    FindingDetails m_details;
    bool m_detailsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
