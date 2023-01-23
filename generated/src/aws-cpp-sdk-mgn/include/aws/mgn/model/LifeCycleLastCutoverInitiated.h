/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Lifecycle last Cutover initiated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/LifeCycleLastCutoverInitiated">AWS
   * API Reference</a></p>
   */
  class LifeCycleLastCutoverInitiated
  {
  public:
    AWS_MGN_API LifeCycleLastCutoverInitiated();
    AWS_MGN_API LifeCycleLastCutoverInitiated(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API LifeCycleLastCutoverInitiated& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetApiCallDateTime() const{ return m_apiCallDateTime; }

    /**
     * <p/>
     */
    inline bool ApiCallDateTimeHasBeenSet() const { return m_apiCallDateTimeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetApiCallDateTime(const Aws::String& value) { m_apiCallDateTimeHasBeenSet = true; m_apiCallDateTime = value; }

    /**
     * <p/>
     */
    inline void SetApiCallDateTime(Aws::String&& value) { m_apiCallDateTimeHasBeenSet = true; m_apiCallDateTime = std::move(value); }

    /**
     * <p/>
     */
    inline void SetApiCallDateTime(const char* value) { m_apiCallDateTimeHasBeenSet = true; m_apiCallDateTime.assign(value); }

    /**
     * <p/>
     */
    inline LifeCycleLastCutoverInitiated& WithApiCallDateTime(const Aws::String& value) { SetApiCallDateTime(value); return *this;}

    /**
     * <p/>
     */
    inline LifeCycleLastCutoverInitiated& WithApiCallDateTime(Aws::String&& value) { SetApiCallDateTime(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline LifeCycleLastCutoverInitiated& WithApiCallDateTime(const char* value) { SetApiCallDateTime(value); return *this;}


    /**
     * <p>Lifecycle last Cutover initiated by Job ID.</p>
     */
    inline const Aws::String& GetJobID() const{ return m_jobID; }

    /**
     * <p>Lifecycle last Cutover initiated by Job ID.</p>
     */
    inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }

    /**
     * <p>Lifecycle last Cutover initiated by Job ID.</p>
     */
    inline void SetJobID(const Aws::String& value) { m_jobIDHasBeenSet = true; m_jobID = value; }

    /**
     * <p>Lifecycle last Cutover initiated by Job ID.</p>
     */
    inline void SetJobID(Aws::String&& value) { m_jobIDHasBeenSet = true; m_jobID = std::move(value); }

    /**
     * <p>Lifecycle last Cutover initiated by Job ID.</p>
     */
    inline void SetJobID(const char* value) { m_jobIDHasBeenSet = true; m_jobID.assign(value); }

    /**
     * <p>Lifecycle last Cutover initiated by Job ID.</p>
     */
    inline LifeCycleLastCutoverInitiated& WithJobID(const Aws::String& value) { SetJobID(value); return *this;}

    /**
     * <p>Lifecycle last Cutover initiated by Job ID.</p>
     */
    inline LifeCycleLastCutoverInitiated& WithJobID(Aws::String&& value) { SetJobID(std::move(value)); return *this;}

    /**
     * <p>Lifecycle last Cutover initiated by Job ID.</p>
     */
    inline LifeCycleLastCutoverInitiated& WithJobID(const char* value) { SetJobID(value); return *this;}

  private:

    Aws::String m_apiCallDateTime;
    bool m_apiCallDateTimeHasBeenSet = false;

    Aws::String m_jobID;
    bool m_jobIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
