/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class UpdateRunGroupRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API UpdateRunGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRunGroup"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The group's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateRunGroupRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateRunGroupRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateRunGroupRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateRunGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateRunGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateRunGroupRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of CPUs to use.</p>
     */
    inline int GetMaxCpus() const{ return m_maxCpus; }
    inline bool MaxCpusHasBeenSet() const { return m_maxCpusHasBeenSet; }
    inline void SetMaxCpus(int value) { m_maxCpusHasBeenSet = true; m_maxCpus = value; }
    inline UpdateRunGroupRequest& WithMaxCpus(int value) { SetMaxCpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of concurrent runs for the group.</p>
     */
    inline int GetMaxRuns() const{ return m_maxRuns; }
    inline bool MaxRunsHasBeenSet() const { return m_maxRunsHasBeenSet; }
    inline void SetMaxRuns(int value) { m_maxRunsHasBeenSet = true; m_maxRuns = value; }
    inline UpdateRunGroupRequest& WithMaxRuns(int value) { SetMaxRuns(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A maximum run time for the group in minutes.</p>
     */
    inline int GetMaxDuration() const{ return m_maxDuration; }
    inline bool MaxDurationHasBeenSet() const { return m_maxDurationHasBeenSet; }
    inline void SetMaxDuration(int value) { m_maxDurationHasBeenSet = true; m_maxDuration = value; }
    inline UpdateRunGroupRequest& WithMaxDuration(int value) { SetMaxDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum GPUs that can be used by a run group.</p>
     */
    inline int GetMaxGpus() const{ return m_maxGpus; }
    inline bool MaxGpusHasBeenSet() const { return m_maxGpusHasBeenSet; }
    inline void SetMaxGpus(int value) { m_maxGpusHasBeenSet = true; m_maxGpus = value; }
    inline UpdateRunGroupRequest& WithMaxGpus(int value) { SetMaxGpus(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_maxCpus;
    bool m_maxCpusHasBeenSet = false;

    int m_maxRuns;
    bool m_maxRunsHasBeenSet = false;

    int m_maxDuration;
    bool m_maxDurationHasBeenSet = false;

    int m_maxGpus;
    bool m_maxGpusHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
