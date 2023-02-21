/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
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
namespace tnb
{
namespace Model
{

  /**
   * <p>Details related to problems with AWS TNB resources.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ProblemDetails">AWS
   * API Reference</a></p>
   */
  class ProblemDetails
  {
  public:
    AWS_TNB_API ProblemDetails();
    AWS_TNB_API ProblemDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API ProblemDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A human-readable explanation specific to this occurrence of the problem.</p>
     */
    inline const Aws::String& GetDetail() const{ return m_detail; }

    /**
     * <p>A human-readable explanation specific to this occurrence of the problem.</p>
     */
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }

    /**
     * <p>A human-readable explanation specific to this occurrence of the problem.</p>
     */
    inline void SetDetail(const Aws::String& value) { m_detailHasBeenSet = true; m_detail = value; }

    /**
     * <p>A human-readable explanation specific to this occurrence of the problem.</p>
     */
    inline void SetDetail(Aws::String&& value) { m_detailHasBeenSet = true; m_detail = std::move(value); }

    /**
     * <p>A human-readable explanation specific to this occurrence of the problem.</p>
     */
    inline void SetDetail(const char* value) { m_detailHasBeenSet = true; m_detail.assign(value); }

    /**
     * <p>A human-readable explanation specific to this occurrence of the problem.</p>
     */
    inline ProblemDetails& WithDetail(const Aws::String& value) { SetDetail(value); return *this;}

    /**
     * <p>A human-readable explanation specific to this occurrence of the problem.</p>
     */
    inline ProblemDetails& WithDetail(Aws::String&& value) { SetDetail(std::move(value)); return *this;}

    /**
     * <p>A human-readable explanation specific to this occurrence of the problem.</p>
     */
    inline ProblemDetails& WithDetail(const char* value) { SetDetail(value); return *this;}


    /**
     * <p>A human-readable title of the problem type.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>A human-readable title of the problem type.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>A human-readable title of the problem type.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>A human-readable title of the problem type.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>A human-readable title of the problem type.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>A human-readable title of the problem type.</p>
     */
    inline ProblemDetails& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>A human-readable title of the problem type.</p>
     */
    inline ProblemDetails& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>A human-readable title of the problem type.</p>
     */
    inline ProblemDetails& WithTitle(const char* value) { SetTitle(value); return *this;}

  private:

    Aws::String m_detail;
    bool m_detailHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
