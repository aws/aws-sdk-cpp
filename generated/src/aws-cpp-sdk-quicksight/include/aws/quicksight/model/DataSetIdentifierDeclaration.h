/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A data set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetIdentifierDeclaration">AWS
   * API Reference</a></p>
   */
  class DataSetIdentifierDeclaration
  {
  public:
    AWS_QUICKSIGHT_API DataSetIdentifierDeclaration();
    AWS_QUICKSIGHT_API DataSetIdentifierDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSetIdentifierDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the data set, typically the data set's name.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier of the data set, typically the data set's name.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier of the data set, typically the data set's name.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier of the data set, typically the data set's name.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier of the data set, typically the data set's name.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier of the data set, typically the data set's name.</p>
     */
    inline DataSetIdentifierDeclaration& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier of the data set, typically the data set's name.</p>
     */
    inline DataSetIdentifierDeclaration& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data set, typically the data set's name.</p>
     */
    inline DataSetIdentifierDeclaration& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the data set.</p>
     */
    inline const Aws::String& GetDataSetArn() const{ return m_dataSetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the data set.</p>
     */
    inline bool DataSetArnHasBeenSet() const { return m_dataSetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the data set.</p>
     */
    inline void SetDataSetArn(const Aws::String& value) { m_dataSetArnHasBeenSet = true; m_dataSetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the data set.</p>
     */
    inline void SetDataSetArn(Aws::String&& value) { m_dataSetArnHasBeenSet = true; m_dataSetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the data set.</p>
     */
    inline void SetDataSetArn(const char* value) { m_dataSetArnHasBeenSet = true; m_dataSetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the data set.</p>
     */
    inline DataSetIdentifierDeclaration& WithDataSetArn(const Aws::String& value) { SetDataSetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the data set.</p>
     */
    inline DataSetIdentifierDeclaration& WithDataSetArn(Aws::String&& value) { SetDataSetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the data set.</p>
     */
    inline DataSetIdentifierDeclaration& WithDataSetArn(const char* value) { SetDataSetArn(value); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_dataSetArn;
    bool m_dataSetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
