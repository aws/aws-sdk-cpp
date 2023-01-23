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
   * <p>Job log data</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/JobLogEventData">AWS
   * API Reference</a></p>
   */
  class JobLogEventData
  {
  public:
    AWS_MGN_API JobLogEventData();
    AWS_MGN_API JobLogEventData(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API JobLogEventData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Job Event conversion Server ID.</p>
     */
    inline const Aws::String& GetConversionServerID() const{ return m_conversionServerID; }

    /**
     * <p>Job Event conversion Server ID.</p>
     */
    inline bool ConversionServerIDHasBeenSet() const { return m_conversionServerIDHasBeenSet; }

    /**
     * <p>Job Event conversion Server ID.</p>
     */
    inline void SetConversionServerID(const Aws::String& value) { m_conversionServerIDHasBeenSet = true; m_conversionServerID = value; }

    /**
     * <p>Job Event conversion Server ID.</p>
     */
    inline void SetConversionServerID(Aws::String&& value) { m_conversionServerIDHasBeenSet = true; m_conversionServerID = std::move(value); }

    /**
     * <p>Job Event conversion Server ID.</p>
     */
    inline void SetConversionServerID(const char* value) { m_conversionServerIDHasBeenSet = true; m_conversionServerID.assign(value); }

    /**
     * <p>Job Event conversion Server ID.</p>
     */
    inline JobLogEventData& WithConversionServerID(const Aws::String& value) { SetConversionServerID(value); return *this;}

    /**
     * <p>Job Event conversion Server ID.</p>
     */
    inline JobLogEventData& WithConversionServerID(Aws::String&& value) { SetConversionServerID(std::move(value)); return *this;}

    /**
     * <p>Job Event conversion Server ID.</p>
     */
    inline JobLogEventData& WithConversionServerID(const char* value) { SetConversionServerID(value); return *this;}


    /**
     * <p>Job error.</p>
     */
    inline const Aws::String& GetRawError() const{ return m_rawError; }

    /**
     * <p>Job error.</p>
     */
    inline bool RawErrorHasBeenSet() const { return m_rawErrorHasBeenSet; }

    /**
     * <p>Job error.</p>
     */
    inline void SetRawError(const Aws::String& value) { m_rawErrorHasBeenSet = true; m_rawError = value; }

    /**
     * <p>Job error.</p>
     */
    inline void SetRawError(Aws::String&& value) { m_rawErrorHasBeenSet = true; m_rawError = std::move(value); }

    /**
     * <p>Job error.</p>
     */
    inline void SetRawError(const char* value) { m_rawErrorHasBeenSet = true; m_rawError.assign(value); }

    /**
     * <p>Job error.</p>
     */
    inline JobLogEventData& WithRawError(const Aws::String& value) { SetRawError(value); return *this;}

    /**
     * <p>Job error.</p>
     */
    inline JobLogEventData& WithRawError(Aws::String&& value) { SetRawError(std::move(value)); return *this;}

    /**
     * <p>Job error.</p>
     */
    inline JobLogEventData& WithRawError(const char* value) { SetRawError(value); return *this;}


    /**
     * <p>Job Event Source Server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>Job Event Source Server ID.</p>
     */
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }

    /**
     * <p>Job Event Source Server ID.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }

    /**
     * <p>Job Event Source Server ID.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }

    /**
     * <p>Job Event Source Server ID.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }

    /**
     * <p>Job Event Source Server ID.</p>
     */
    inline JobLogEventData& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>Job Event Source Server ID.</p>
     */
    inline JobLogEventData& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>Job Event Source Server ID.</p>
     */
    inline JobLogEventData& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}


    /**
     * <p>Job Event Target instance ID.</p>
     */
    inline const Aws::String& GetTargetInstanceID() const{ return m_targetInstanceID; }

    /**
     * <p>Job Event Target instance ID.</p>
     */
    inline bool TargetInstanceIDHasBeenSet() const { return m_targetInstanceIDHasBeenSet; }

    /**
     * <p>Job Event Target instance ID.</p>
     */
    inline void SetTargetInstanceID(const Aws::String& value) { m_targetInstanceIDHasBeenSet = true; m_targetInstanceID = value; }

    /**
     * <p>Job Event Target instance ID.</p>
     */
    inline void SetTargetInstanceID(Aws::String&& value) { m_targetInstanceIDHasBeenSet = true; m_targetInstanceID = std::move(value); }

    /**
     * <p>Job Event Target instance ID.</p>
     */
    inline void SetTargetInstanceID(const char* value) { m_targetInstanceIDHasBeenSet = true; m_targetInstanceID.assign(value); }

    /**
     * <p>Job Event Target instance ID.</p>
     */
    inline JobLogEventData& WithTargetInstanceID(const Aws::String& value) { SetTargetInstanceID(value); return *this;}

    /**
     * <p>Job Event Target instance ID.</p>
     */
    inline JobLogEventData& WithTargetInstanceID(Aws::String&& value) { SetTargetInstanceID(std::move(value)); return *this;}

    /**
     * <p>Job Event Target instance ID.</p>
     */
    inline JobLogEventData& WithTargetInstanceID(const char* value) { SetTargetInstanceID(value); return *this;}

  private:

    Aws::String m_conversionServerID;
    bool m_conversionServerIDHasBeenSet = false;

    Aws::String m_rawError;
    bool m_rawErrorHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;

    Aws::String m_targetInstanceID;
    bool m_targetInstanceIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
