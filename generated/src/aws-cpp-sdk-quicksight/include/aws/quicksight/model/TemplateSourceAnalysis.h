/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DataSetReference.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The source analysis of the template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TemplateSourceAnalysis">AWS
   * API Reference</a></p>
   */
  class TemplateSourceAnalysis
  {
  public:
    AWS_QUICKSIGHT_API TemplateSourceAnalysis();
    AWS_QUICKSIGHT_API TemplateSourceAnalysis(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TemplateSourceAnalysis& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline TemplateSourceAnalysis& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline TemplateSourceAnalysis& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline TemplateSourceAnalysis& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A structure containing information about the dataset references used as
     * placeholders in the template.</p>
     */
    inline const Aws::Vector<DataSetReference>& GetDataSetReferences() const{ return m_dataSetReferences; }

    /**
     * <p>A structure containing information about the dataset references used as
     * placeholders in the template.</p>
     */
    inline bool DataSetReferencesHasBeenSet() const { return m_dataSetReferencesHasBeenSet; }

    /**
     * <p>A structure containing information about the dataset references used as
     * placeholders in the template.</p>
     */
    inline void SetDataSetReferences(const Aws::Vector<DataSetReference>& value) { m_dataSetReferencesHasBeenSet = true; m_dataSetReferences = value; }

    /**
     * <p>A structure containing information about the dataset references used as
     * placeholders in the template.</p>
     */
    inline void SetDataSetReferences(Aws::Vector<DataSetReference>&& value) { m_dataSetReferencesHasBeenSet = true; m_dataSetReferences = std::move(value); }

    /**
     * <p>A structure containing information about the dataset references used as
     * placeholders in the template.</p>
     */
    inline TemplateSourceAnalysis& WithDataSetReferences(const Aws::Vector<DataSetReference>& value) { SetDataSetReferences(value); return *this;}

    /**
     * <p>A structure containing information about the dataset references used as
     * placeholders in the template.</p>
     */
    inline TemplateSourceAnalysis& WithDataSetReferences(Aws::Vector<DataSetReference>&& value) { SetDataSetReferences(std::move(value)); return *this;}

    /**
     * <p>A structure containing information about the dataset references used as
     * placeholders in the template.</p>
     */
    inline TemplateSourceAnalysis& AddDataSetReferences(const DataSetReference& value) { m_dataSetReferencesHasBeenSet = true; m_dataSetReferences.push_back(value); return *this; }

    /**
     * <p>A structure containing information about the dataset references used as
     * placeholders in the template.</p>
     */
    inline TemplateSourceAnalysis& AddDataSetReferences(DataSetReference&& value) { m_dataSetReferencesHasBeenSet = true; m_dataSetReferences.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<DataSetReference> m_dataSetReferences;
    bool m_dataSetReferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
