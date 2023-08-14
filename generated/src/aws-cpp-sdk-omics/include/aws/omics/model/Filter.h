/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ShareStatus.h>
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
   * <p> Use filters to focus the returned annotation store versions on a specific
   * parameter, such as the status of the annotation store. </p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/Filter">AWS API
   * Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_OMICS_API Filter();
    AWS_OMICS_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Number (Arn) for an analytics store. </p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p> The Amazon Resource Number (Arn) for an analytics store. </p>
     */
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }

    /**
     * <p> The Amazon Resource Number (Arn) for an analytics store. </p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p> The Amazon Resource Number (Arn) for an analytics store. </p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }

    /**
     * <p> The Amazon Resource Number (Arn) for an analytics store. </p>
     */
    inline Filter& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p> The Amazon Resource Number (Arn) for an analytics store. </p>
     */
    inline Filter& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Number (Arn) for an analytics store. </p>
     */
    inline Filter& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p> The Amazon Resource Number (Arn) for an analytics store. </p>
     */
    inline Filter& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p> The Amazon Resource Number (Arn) for an analytics store. </p>
     */
    inline Filter& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }


    /**
     * <p> The status of an annotation store version. </p>
     */
    inline const Aws::Vector<ShareStatus>& GetStatus() const{ return m_status; }

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline void SetStatus(const Aws::Vector<ShareStatus>& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline void SetStatus(Aws::Vector<ShareStatus>&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline Filter& WithStatus(const Aws::Vector<ShareStatus>& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline Filter& WithStatus(Aws::Vector<ShareStatus>&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline Filter& AddStatus(const ShareStatus& value) { m_statusHasBeenSet = true; m_status.push_back(value); return *this; }

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline Filter& AddStatus(ShareStatus&& value) { m_statusHasBeenSet = true; m_status.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;

    Aws::Vector<ShareStatus> m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
