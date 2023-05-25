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
   * <p>Lifecycle last Test initiated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/LifeCycleLastTestInitiated">AWS
   * API Reference</a></p>
   */
  class LifeCycleLastTestInitiated
  {
  public:
    AWS_MGN_API LifeCycleLastTestInitiated();
    AWS_MGN_API LifeCycleLastTestInitiated(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API LifeCycleLastTestInitiated& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Lifecycle last Test initiated API call date and time.</p>
     */
    inline const Aws::String& GetApiCallDateTime() const{ return m_apiCallDateTime; }

    /**
     * <p>Lifecycle last Test initiated API call date and time.</p>
     */
    inline bool ApiCallDateTimeHasBeenSet() const { return m_apiCallDateTimeHasBeenSet; }

    /**
     * <p>Lifecycle last Test initiated API call date and time.</p>
     */
    inline void SetApiCallDateTime(const Aws::String& value) { m_apiCallDateTimeHasBeenSet = true; m_apiCallDateTime = value; }

    /**
     * <p>Lifecycle last Test initiated API call date and time.</p>
     */
    inline void SetApiCallDateTime(Aws::String&& value) { m_apiCallDateTimeHasBeenSet = true; m_apiCallDateTime = std::move(value); }

    /**
     * <p>Lifecycle last Test initiated API call date and time.</p>
     */
    inline void SetApiCallDateTime(const char* value) { m_apiCallDateTimeHasBeenSet = true; m_apiCallDateTime.assign(value); }

    /**
     * <p>Lifecycle last Test initiated API call date and time.</p>
     */
    inline LifeCycleLastTestInitiated& WithApiCallDateTime(const Aws::String& value) { SetApiCallDateTime(value); return *this;}

    /**
     * <p>Lifecycle last Test initiated API call date and time.</p>
     */
    inline LifeCycleLastTestInitiated& WithApiCallDateTime(Aws::String&& value) { SetApiCallDateTime(std::move(value)); return *this;}

    /**
     * <p>Lifecycle last Test initiated API call date and time.</p>
     */
    inline LifeCycleLastTestInitiated& WithApiCallDateTime(const char* value) { SetApiCallDateTime(value); return *this;}


    /**
     * <p>Lifecycle last Test initiated Job ID.</p>
     */
    inline const Aws::String& GetJobID() const{ return m_jobID; }

    /**
     * <p>Lifecycle last Test initiated Job ID.</p>
     */
    inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }

    /**
     * <p>Lifecycle last Test initiated Job ID.</p>
     */
    inline void SetJobID(const Aws::String& value) { m_jobIDHasBeenSet = true; m_jobID = value; }

    /**
     * <p>Lifecycle last Test initiated Job ID.</p>
     */
    inline void SetJobID(Aws::String&& value) { m_jobIDHasBeenSet = true; m_jobID = std::move(value); }

    /**
     * <p>Lifecycle last Test initiated Job ID.</p>
     */
    inline void SetJobID(const char* value) { m_jobIDHasBeenSet = true; m_jobID.assign(value); }

    /**
     * <p>Lifecycle last Test initiated Job ID.</p>
     */
    inline LifeCycleLastTestInitiated& WithJobID(const Aws::String& value) { SetJobID(value); return *this;}

    /**
     * <p>Lifecycle last Test initiated Job ID.</p>
     */
    inline LifeCycleLastTestInitiated& WithJobID(Aws::String&& value) { SetJobID(std::move(value)); return *this;}

    /**
     * <p>Lifecycle last Test initiated Job ID.</p>
     */
    inline LifeCycleLastTestInitiated& WithJobID(const char* value) { SetJobID(value); return *this;}

  private:

    Aws::String m_apiCallDateTime;
    bool m_apiCallDateTimeHasBeenSet = false;

    Aws::String m_jobID;
    bool m_jobIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
